#include <stdio.h>
#include <stdlib.h>

int main(int argc,char * argv [])
{
	float sum=0.0;
	float n;
	int count=0;
	FILE * fp;
	
	if(argc==1)
		fp=stdin;
	else if(argc==2)
	{
		if((fp=fopen(argv[1],"r"))==NULL)
		{
			fprintf(stderr,"Can't open file %s",argv[1]);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr,"Usage:%s [filename]",argv[0]);
		exit(EXIT_FAILURE);
	}
	
	while(fscanf(fp,"%f",&n)==1)
	{
		sum +=n;
		count++;
	}
	if(count>0)
		printf("Average of %d values= %f\n",count,sum/count);
	else
		printf("No valied date.\n");
	
	
	
	return 0;
}
