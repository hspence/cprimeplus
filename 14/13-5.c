#include <stdio.h>
#define LEN 40
#define CSIZE 4
struct name{
	char first[LEN];
	char last[LEN]; 
};
struct student{
	struct name handle;
	double grade[3];
	double average; 
};

int main(void)
{
	char name[LEN];
	int i,j;
	double total=0.0,all_total=0.0,average;
	 
	struct student list[CSIZE]={
		{{"hank","spence"}},
		{{"chen","zhihao"}},
		{{"zhou","jieyu"}},
		{{"ling","shenlin"}}
	};
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Please enter the %d th score of the %s %s:\n",j+1,list[i].handle.first,list[i].handle.last);
			scanf("%lf",&list[i].grade[j]);
			total+=list[i].grade[j];
			all_total +=list[i].grade[j];
			while(getchar()!='\n')
				continue;
		}
		list[i].average=total/3.0;
		total=0.0;
	}
	printf("---------------------\n");
	for(i=0;i<4;i++)
	{
		printf("%10s %10s 's score: %.2lf , %.2lf , %.2lf average: %.2lf\n",list[i].handle.first,list[i].handle.last,list[i].grade[0],list[i].grade[1],list[i].grade[2],list[i].average);
	}
	average =all_total/12.0;
	printf("The class 's average is %.2lf\n",average);

	return 0;
}
