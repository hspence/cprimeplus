#include <stdio.h>
#define LEN 40

struct name{
	char first[LEN];
	char middle[LEN];
	char last[LEN];
};

struct client{
	char insurancenum[LEN];
	struct name information;
};
void printf_struct(struct client mode);

int main(void)
{
	int i;
	struct client list[5]={
		{"35783957729",{"Dribble","M","Flossie"}},
		{"93579945949",{"Hank","S","Spence"}},
		{"99356334539",{"chenug","C","chihao"}},
		{"20394859238",{"Stephen"," ","Prata"}},
		{"88543920344",{"Lryic","L","huimin"}}
	};
	for(i=0;i<5;i++)
	{
		printf_struct(list[i]);
	}
	
	printf("Done.\n");
	
	return 0;
}

void printf_struct(struct client mode)
{
	
	printf("%10s, %10s %c%c -- %s\n",mode.information.first, mode.information.last, mode.information.middle[0],(mode.information.middle[0]==' '? ' ':'.'),mode.insurancenum);
	
	
}
