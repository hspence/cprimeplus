#include <stdio.h>

double sum(double *);
double all_sum(double [*][5]);

int main(void)
{
    int i;
    int list[3][5];
    get_input(list);
    for(i=0;i<3;i++) 
        printf("The %d line sums is %.2lf \n",i+1,sum(list[i]));
    printf("\n The all sums is %lf\n",all_sum(list));
    
   
    return 0;
}

void get_input(double list[*][5])
{
    int i;
    printf("please enter five number:\n");
    for(i=0;i<3;i++){
    scanf("%lf %lf %lf %lf %lf",&list[i][0],&list[i][1],&list[i][2],&list[i][3],list[i][4]);
   if(i<2) printf("please enter five number:\n");
}
} 
     
double sum(double *list)
{
    int i;
    double sum;
    for(i=0;i<5;i++) sum += list[i];
    return sum;
}

double all_sum(double list[*][5])
{
    int i,j;
    double sum;
    for(i=0;i<3;i++)
        for(j=0;j<5;j++)
            sum += list[i][j];
    return sum;
}
