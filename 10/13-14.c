#include <stdio.h>

double sum(int ,int [*]);
double all_sum(int,int [] [*]);
void get_input(int,int [] [*]);

int main(void)
{
    int i;
    int list[3][5];
    get_input(5,list);
    for(i=0;i<3;i++) 
        printf("The %d line sums is %.2lf \n",i+1,sum(5,list[i]));
    printf("\n The all sums is %.2lf\n",all_sum(5,list));
    
   
    return 0;
}

void get_input(int n,int list[][n])
{
    int i;
    printf("please enter five number:\n");
    for(i=0;i<3;i++){
    scanf("%d %d %d %d %d",&list[i][0],&list[i][1],&list[i][2],&list[i][3],&list[i][4]);
   if(i<2) printf("please enter five number:\n");
}
} 
     
double sum(int n, int list[n])
{
    int i;
    double sum=0;
    for(i=0;i<5;i++) sum += list[i];
    return sum;
}

double all_sum(int n,int list[][n])
{
    int i,j;
    double sum=0;
    for(i=0;i<3;i++)
        for(j=0;j<5;j++)
            sum += list[i][j];
    return sum;
}
