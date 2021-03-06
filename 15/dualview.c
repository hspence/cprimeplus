#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
//边框线样式
#define SOLID 0
#define DOTTED 1
#define DASHED 2
//三原色
#define BLUE 4		//100
#define GREEN 2		//010
#define RED 1		//001

#define BLACK 0 			//000
#define YELLOW (RED|GREEN)	//011
#define MAGENTA (RED|BLUE)  //101
#define CYAN (GREEN|BLUE)	//110 青色
#define WHITE (RED|GREEN|BLUE)//111
//按位方法中用到的符号常量
#define OPAQUE 0x1    				//  0001 不透明的
#define FILL_BLUE 0x8 				//  1000 
#define FILL_GREEN 0x4				//  0100
#define FILL_RED 0x2  				//  0010
#define FILL_MASK 0xE 				//  1110
#define BORDER 0x100  	 		// 0001 0000 0000
#define BORDER_BLUE 0x800 		// 1000 0000 0000
#define BORDER_GREEN 0x400		// 0100 0000 0000
#define BORDER_RED 0x200  		// 0010 0000 0000
#define BORDER_MASK 0xE00 		// 1111 0000 0000
#define B_SOLID 0			//0000 0000 0000 0000
#define B_DOTTED 0x1000		//0001 0000 0000 0000
#define B_DASHED 0x2000		//0010 0000 0000 0000
#define STYLE_MASK 0x3000	//0011 0000 0000 0000

const char * colors[8]={"black","red","green","yellow","blue","magenta","cyan","white"};

struct box_props {
	bool opaque					:1;
	unsigned int fill_color		:3;
	unsigned int				:4;
	bool show_border			:1;
	unsigned int border_color	:3;
	unsigned int border_style	:2;
	unsigned int 				:2;
};

union Views
{
	struct box_props st_view;
	unsigned short us_view;
};

void show_settings(const struct box_props * pb);
void show_settings1(unsigned short us);
char * itobs(int n,char * ps);

int main(void)
{	
	union Views box={{false,YELLOW,true,GREEN,DASHED}};
	char bin_str[CHAR_BIT*sizeof(int)+1];
	printf("Original box settings:\n");
	show_settings(&box.st_view);
	printf("Box settings using unsigned int view:\n");
	show_settings1(box.us_view);
	printf("bits are %s",itobs(box.us_view,bin_str));
	
	box.us_view &= ~FILL_MASK;//把fill_color的位清零；
	box.us_view |= (FILL_BLUE|FILL_GREEN);//重置fill_color的值
	box.us_view ^=OPAQUE;
	box.us_view |=BORDER_RED; //错误，应先把相关位清零
	box.us_view &= ~STYLE_MASK;
	box.us_view |=B_DOTTED;
	printf("\nModified box settings:\n");
	show_settings(&box.st_view);
	printf("\nBox setting using unsigned int view:\n");
	show_settings1(box.us_view);
	printf("bits are %s",itobs(box.us_view,bin_str));
	
	return 0;
}

void show_settings(const struct box_props * pb)
{
	printf("Box is %s.\n",pb->opaque==true?"opaque":"transparent");
	printf("The fill color is %s.\n",colors[pb->fill_color]);
	printf("Border %s.\n",pb->show_border==true?"shown":"not shown");
	printf("The border color is %s.\n",colors[pb->border_color]);
	printf("The border style is ");
	switch (pb->border_style)
	{
		case SOLID:		printf("solid.\n");break;
		case DOTTED:	printf("dotted.\n");break;
		case DASHED:	printf("dashed.\n");break;
		default:		printf("unknown type.\n");
	}
	putchar('\n');
}
void show_settings1(unsigned short us)
{
	printf("Box is %s .\n",(us&OPAQUE)==OPAQUE?"opaque":"transparent");
	printf("The fill color is %s .\n",colors[(us>>1)&07]);//向右移一位（opaque位），使用07（111）作为掩码截断us
	printf("Border %s .\n",(us&BORDER)==BORDER?"shown":"not shown");
	printf("The border color is %s .\n",colors[(us&BORDER_MASK)>>9]);
	printf("The border style is ");
	switch (us&STYLE_MASK)
	{
		case B_SOLID:
			printf("solid.\n");
			break;
		case B_DOTTED:
			printf("dotted.\n");
			break;
		case B_DASHED:
			printf("dashed.\n");
			break;
		default:
			printf("Unknown type.\n");
			break;
	}
	putchar('\n');
}
char * itobs(int n,char * ps)
{
	int i;
	const static unsigned int size =sizeof(int)*CHAR_BIT;
	for(i=size-1;i>=0;i--,n>>=1)
	{
		ps[i]=(01&n)+'0';
	}
	ps[size]='\0';
	return ps;
}























