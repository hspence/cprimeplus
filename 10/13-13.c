#include <stdio.h>

double sum(int []);
double all_sum(int [] [5]);
void get_input(int [] [5]);

int main(void)
{
    int i;
    int list[3][5];
    get_input(list);
    for(i=0;i<3;i++) 
        printf("The %d line sums is %.2lf \n",i+1,sum(list[i]));
    printf("\n The all sums is %.2lf\n",all_sum(list));
    
   
    return 0;
}

void get_input(int list[][5])
{
    int i;
    printf("please enter five number:\n");
    for(i=0;i<3;i++){
    scanf("%d %d %d %d %d",&list[i][0],&list[i][1],&list[i][2],&list[i][3],&list[i][4]);
   if(i<2) printf("please enter five number:\n");
}
} 
     
double sum(int list[5])
{
    int i;
    double sum=0;
    for(i=0;i<5;i++) sum += list[i];
    return sum;
}

double all_sum(int list[][5])
{
    int i,j;
    double sum=0;
    for(i=0;i<3;i++)
        for(j=0;j<5;j++)
            sum += list[i][j];
    return sum;
}
