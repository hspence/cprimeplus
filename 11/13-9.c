#include <stdio.h>
#include <string.h>
#define SIZE 40
#define QUIT "quit\n"
char * string_re(char * string);
int main(void)
{
	char string[SIZE];
	printf("please input string:\n");

	while(strcmp(fgets(string,SIZE,stdin),QUIT))
	{
		string[strlen(string)-1]='\0';
		string_re(string);
		printf("The results is %s\n",string);
		printf("please input string:\n");
	}
	printf("ok! good bye!");
	return 0;
}

char * string_re(char * string)
{
	char cache;
	int i,num;
	num=strlen(string);
	
	for(i=0;i<(num/2);i++)
	{
		cache=string[i];
		string[i]=string[num-i-1];
		string[num-i-1]=cache;
	}
	return string;
}
/*char * string_re(char * st)
{
    unsigned int i;
    char temp;

    size_t length = strlen(st);
    for (i = 0; i < length / 2; i++)
    {
        temp = st[length - i -1];
        st[length - i - 1] = st[i];
        st[i] = temp;
    }
    st[length] = '\0';
}*/
