#include <stdio.h>
#define NLEN 30

struct book {
	char title[NLEN];
	char author[NLEN];
	float value;
};

int main(void)
{
	struct book readfirst;
	int score;
	printf("Please enter score:\n");
	scanf("%d",&score);
	if(score>84)
		readfirst=(struct book) {"Crime and Punishment",
			"Fyodot Dostoyevsky",
			11.25};
	else
		readfirst=(struct book) {
			"Mr.Bouncy' Nice Hat",
			"Fred Winsome",
			5.99};
	printf("Your ssigned reading:\n");
	printf("%s by %s: $ %.2f\n",readfirst.title,readfirst.author,readfirst.value);
	
	
	return 0;
	
}
