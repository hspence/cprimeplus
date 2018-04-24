#include <stdio.h>
#define MONTHS 12
#define YEARS 5

int main(void)
{
const float rain[YEARS][MONTHS]=
{
    {4.3, 4.5, 3.5, 3.6, 4.6, 2.5, 4.6, 3.7, 7.8, 9.3, 3.5, 9.3},
    {2.6, 4,6, 5.6, 2.3, 8.5, 3.6, 3.7, 8.9, 1.6, 1.8, 3.6, 8.6},
    {2.6, 4,6, 2.6, 2.3, 8.5, 4.6, 3.7, 8.9, 1.6, 6.8, 3.6, 3.6},
    {2.6, 4,6, 5.6, 6.3, 8.5, 3.6, 3.7, 8.1, 1.6, 6.8, 3.6, 3.6},
    {2.6, 4,6, 9.6, 2.3, 9.5, 3.6, 3.7, 8.9, 1.6, 6.8, 3.6, 3.6}
};
int year,month;
float subtot,total;

printf("YEAR   RAINFALL  (inches)\n");
for(year=0,total=0;year<YEARS;year++)
{
    for(month=0,subtot=0;month<MONTHS;month++)
        subtot += *(*(rain+year)+month);

    printf("%5d %15.1f\n",2010+year,subtot);
    total += subtot;
}
printf("\nThe yearly average is %.lf inches.\n\n",total/YEARS);

printf("MONTHLY AVERAGE:\n\n");
printf("Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec  \n");
for(month=0;month<MONTHS;month++)
{
    for(year=0,subtot=0;year<YEARS;year++)
        subtot += *(*(rain+year)+month);

    printf("%4.lf ",subtot/YEARS);
}
printf("\n");
    

    return 0;
}
