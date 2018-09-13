#include <stdio.h>
#include <ctype.h>
#define SIZE 40

int main(void)
{
	int word=0,lower=0,upper=0;
	int punct=0,numct=0,inword=0;
	char ch;
	while((ch=getchar())!=EOF)
	{
		if(!isspace(ch) && ispunct(ch) && !inword)
		{
			inword =1;
			word++;
		}
		if(isspace(ch)|| ispunct(ch) && inword)
			inword=0;
		if(isdigit(ch))
			numct++;
		if(islower(ch))
			lower++;
		if(isupper(ch))
			upper++;
		if(ispunct(ch))
			punct++;
		
	}
	printf("word : %d ;  digit: %d ; lower: %d ; upper:%d ;punct: %d ;\n",word,numct,lower,upper,punct);
	
	return 0;
}
