#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define LEN 20
#define SIZE 18

struct player {
	int num;
	char * first[LEN];
	char * last[LEN];
	int play_times;
	int hit_times;
	int run_times;
	int rbi_times;
};
void init_data(struct player * pts,int n);
void get_data(struct player * pts,int n);
void print_data(struct player * pts,int n);

int main(void)
{
	
	static struct player team[SIZE];	
	init_data(team,SIZE);
	get_data(team,SIZE);
	print_data(team,SIZE);
	
	return 0;
}
void init_data(struct player * pts,int n)
{
	int i;
	for(i=0;i<n;i++,pts++)
	{
		pts->num=0;
		strcpy(pts->first, "");
		strcpy(pts->last, "");
		pts->play_times=0;
		pts->hit_times=0;
		pts->run_times=0;
		pts->rbi_times=0;
	}
}
void get_data(struct player * pts,int n)
{
	int number;
	char first[LEN];
	char last[LEN];
	char filename[LEN];
	int play_times,hit_times,run_times,rbi_times;
	FILE * fp;
	printf("Please enter the file name:\n");
	scanf("%s",filename);
	if((fp=fopen(filename,"r"))==NULL)
	{
		fprintf(stderr,"Error in open file %s",filename);
		exit(EXIT_FAILURE);
	}
	while(fscanf(fp,"%d %s %s %d %d %d %d",&number,first,last,&play_times,&hit_times,&run_times,&rbi_times))
	{
		pts[number].num=number;
		strcpy(pts[number].first,first);
		strcpy(pts[number].last,last);
		pts[number].play_times=play_times;
		pts[number].hit_times=hit_times;
		pts[number].run_times=run_times;
		pts[number].rbi_times=rbi_times;
	}
	fclose(fp);
}
print_data(struct player * pts,int n)
{
	int i;
	for(i=0;i<n;i++,pts++)
	{
		if(pts->first !='\0')
			printf("%d %s %s %d %d %d %d\n",pts->num,pts->first,pts->last,pts->play_times,pts->hit_times,pts->run_times,pts->rbi_times);
		else
			break;
	}
}


















