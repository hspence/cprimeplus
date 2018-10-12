#include <stdio.h>
#include <stdlib.h>

struct flex {
	size_t count;
	double average;
	double score [];
};
void showFlex(struct flex * pt);
int main(void)
{
	struct flex *pf1,*pf2;
	int n=5;
	int i;
	int tol=0;
	
	pf1=malloc(sizeof(struct flex)+n*sizeof(double));
	pf1->count=n;
	for(i=0;i<n;i++)
	{
		pf1->score[i]=20.00-i;
		tol += pf1->score[i];
	}
	pf1->average=tol/n;
	showFlex(pf1);
	
	tol=0;
	n=9;
	pf2=malloc(sizeof(struct flex)+n*sizeof(double));
	pf2->count=n;
	for(i=0;i<n;i++)
	{
		pf2->score[i]=20.0-i;
		tol += pf2->score[i];
	}
	pf2->average=tol/n;
	showFlex(pf2);
	
	free(pf1);
	free(pf2);
	
	return 0;
}
void showFlex(struct flex * pt)
{
	int i;
	printf("score: ");
	for(i=0;i<pt->count;i++)
	{
		printf("%g ",pt->score[i]);
	}
	printf("\nAverage: %g\n",pt->average);
}

















