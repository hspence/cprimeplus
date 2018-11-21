#include <stdio.h>
#include <time.h>
void delay(double);

int main(void)
{
    double time;
    printf("Please enter the time your want to delay:(in second)\n");
    while(scanf("%lf",&time)==1)
    {
        delay(time);
        printf("Next input(q to quit):\n");
    }

    return 0;
}

void delay(double time)
{
    clock_t start=clock(); 
      
    while(((double) clock()-start)/CLOCKS_PER_SEC<time)
    {
        continue; 
    }

}
