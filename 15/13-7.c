#include <stdio.h>

#define ID_MASK 0xff
#define SIZE_MASK (0x7f<<8)
#define ALIGNMENT_MASK (0x3<<15)
#define BOLD (0x1<<17)
#define ITALIC (0x1<<18)
#define UNDERLINE (0x1<<19)

char get_choice(unsigned int n);
void eatline(void);

int main(void)
{
	unsigned long option =0;
	char ch;
	int num;
	while((ch=get_choice(option))!='q')
	{
		switch(ch)
		{
			case 'f':
				printf("Enter the font id(0-255):\n");
				scanf("%d",&num);
				eatline();
				option &=(~ID_MASK);
				num &=0xff;
				option |=num;
				break;
			case 's':
				printf("Enter the font size(0-127):\n");
				scanf("%d",&num);
				eatline();
				option &=(~SIZE_MASK);
				num &=0x7f;
				option |=(num<<8);
				break;
			case 'a':
				printf("Enter the alignment(0.left 1.middle 2.left):\n");
				scanf("%d",&num);
				eatline();
				option &=(~ALIGNMENT_MASK);
				num &=0x3;
				option |=(num<<15);
				break;
			case 'b':
				option ^=BOLD;
				break;
			case 'i':
				option ^=ITALIC;
				break;
			case 'u':
				option ^=UNDERLINE;
				break;
			default:
				printf("Error!\n");
				break;
		}
	}
	return 0;
}

char get_choice(unsigned int n)
{
	char ch;
	char * word[3]={"left","middle","rignt"};
	printf("---------------------\n");
	printf("ID  SIZE  ALIGNMENT  B  I  U \n");
	printf("%2d  ",n&ID_MASK);
	printf("%4d  ",(n&SIZE_MASK)>>8);
	printf("%9s  ",word[(n&ALIGNMENT_MASK)>>15]);
	printf("%d  ",(n&BOLD)>>17);
	printf("%d  ",(n&ITALIC)>>18);
	printf("%d  \n",(n&UNDERLINE)>>19);
	
	printf("\n\n");
	printf("f)changed font	s)changed size	a)changed alignment\n");
	printf("b)toggle bold   i)toggle italic u)toggle underline\n");
	printf("q)quit.\n");
	while((ch=getchar())!='f'&&ch!='s'&&ch!='a'&&ch!='b'&&ch!='i'&&ch!='u'&&ch!='q')
	{
		printf("input error,try again!\n");
		while(getchar()!='\n')
			continue;
	}
	while(getchar()!='\n')
		continue;
	return ch;
}
void eatline(void)
{
	while(getchar()!='\n')
		continue;
}


