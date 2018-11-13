#include <stdio.h>

#define LEFT 0
#define MIDDLE 1
#define RIGHT 2
#define ON 1
#define OFF 0

struct word {
	unsigned int font_id	:8;
	unsigned int size		:7;
	unsigned int alignment	:2;
	unsigned int bold		:1;
	unsigned int italic		:1;
	unsigned int underline	:1;
};

char get_choice(struct word * pb);
void changed_font(struct word * pb);
void changed_size(struct word * pb);
void changed_alignment(struct word * pb);
void toggle_bold(struct word * pb);
void toggle_italic(struct word * pb);
void toggle_underline(struct word * pb);

int main(void)
{
	struct word option={1,12,LEFT,OFF,OFF,OFF};
	char ch;
	while((ch=get_choice(&option))!='q')
	{
		switch(ch)
		{
			case 'f':
				changed_font(&option);
				break;
			case 's':
				changed_size(&option);
				break;
			case 'a':
				changed_alignment(&option);
				break;
			case 'b':
				toggle_bold(&option);
				break;
			case 'i':
				toggle_italic(&option);
				break;
			case 'u':
				toggle_underline(&option);
				break;
			default:
				printf("Error!\n");
				break;
		}
	}
	printf("Bye.\n");
	
	return 0;
}
char get_choice(struct word * pb)
{
	char ch;
	
	printf("---------------------\n");
	printf("ID	SIZE  ALIGNMENT  B   I   U \n");
	printf("%d        %d       %2d     %d   %d   %d \n",pb->font_id,pb->size,pb->alignment,pb->bold,pb->italic,pb->underline);
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
void changed_font(struct word * pb)
{
	unsigned int ret;
	printf("Enter font id (0-255):");
	scanf("%u",&ret);
	pb->font_id=(ret&255);
	while(getchar()!='\n')
		continue;
}
void changed_size(struct word * pb)
{
	unsigned int ret;
	printf("Enter font size (0-127):");
	scanf("%u",&ret);
	pb->size=(ret&127);
	while(getchar()!='\n')
		continue;
}
void changed_alignment(struct word * pb)
{
	int ret;
	printf("Enter alignment 0)left 1)middle 2)rignt:");
	scanf("%d",&ret);
	pb->font_id=ret;
	while(getchar()!='\n')
		continue;
}
void toggle_bold(struct word * pb)
{
	pb->bold ^=ON;
}
void toggle_italic(struct word * pb)
{
	pb->italic ^=ON;
}
void toggle_underline(struct word * pb)
{
	pb->underline ^=ON;
}

























