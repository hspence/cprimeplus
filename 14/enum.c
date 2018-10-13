#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define NLEN 30

char * s_gets(char * st,int n);

enum spectrum {
	red,orange,yellow,green,blue,violet
};
const char * colors[]={
	"red","orange","yellow","green","blue","violet"
};

int main(void)
{
	enum spectrum color;
	char choice[NLEN];
	printf("Please enter the color your choice:\n");
	printf("Enter a empty line to quit.\n");
	bool color_is_found = false;
	while(s_gets(choice,NLEN)&&choice[0]!='\0')
	{
		for(color=red;color<=violet;color++)
		{
			if(strcmp(choice,colors[color])==0)
				color_is_found=true;
				break;
		}
		if(color_is_found)
		{
			switch (color)
			{
				case red:
					puts("Rose is red.");
					break;
				case orange:
					puts("Poppies is orange.");
					break;
				case yellow:
					puts("Sunflowers is yellow.");
					break;
				case green:
					puts("Grass is green.");
					break;
				case blue:
					puts("Bluebells is blue.");
					break;
				case violet:
					puts("Violets is violet.");
			}
		}
		else
			printf("Can\'t find th color %s",color);
		color_is_found=false;
		puts("Next color,press a empty line to quit");
	}
	puts("Good bye.");
	
	return 0;
}
char * s_gets(char * st,int n)
{
	char * ret_val;
	char * find;
	ret_val=fgets(st,n,stdin);
	if(ret_val)
	{
		find=strchr(st,'\n');
		if(find)
			*find='\0';
		else
			while(getchar()!='\n')
				continue;
	}
	return ret_val;
}









