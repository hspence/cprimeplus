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
void printf_struct(struct client list[],int n);

int main(void)
{
	struct client list[5]={
		{"35783957729",{"Dribble","M","Flossie"}},
		{"93579945949",{"Hank","S","Spence"}},
		{"99356334539",{"chenug","C","chihao"}},
		{"20394859238",{"Stephen"," ","Prata"}},
		{"88543920344",{"Lryic","L","huimin"}}
	};
	printf_struct(list,5);
	printf("Done.\n");
	
	return 0;
}
void printf_struct(struct client list[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%10s, %10s %c%c -- %s\n",list[i].information.first, list[i].information.last, list[i].information.middle[0],(list[i].information.middle[0]==' '? ' ':'.'),list[i].insurancenum);
	}
}
