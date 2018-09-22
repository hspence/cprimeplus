#include <stdio.h>

float get_info_dis(int);
float get_info_con(int);
void show_info(int,float,float);

int main(void)
{
    int mode;
    float distance,consumed;
    printf("Please enter 0 for metric mode,1 for US mode:\n");
    scanf("%d",&mode);

    while(mode>=0)
    {
        distance=get_info_dis(mode);
        consumed=get_info_con(mode);
        show_info(mode,distance,consumed);
        printf("Please enter 0 for metric mode,1 for US mode:\n");
        scanf("%d",&mode);
    }

    return 0;
}
float get_info_dis(int mode)
{   float dis;
    if(mode==0)
    {
        printf("Enter distance traveled in kilometers:\n");
        scanf("%f",&dis);
    }
    else
    {
        if(mode>1)
            printf("Invailed mode specified.Mode 1(US) used.\n");
        printf("Enter distance traveled in miles:\n");
        scanf("%f",&dis);
    }
    return dis;
}
float get_info_con(int mode)
{
    float con;
    if(mode==0)
    {
        printf("Enter fuel consumed in liters:\n");
        scanf("%f",&con);
    }
    else
    {
        printf("Enter fuel consumed in gallon:\n");
        scanf("%f",&con);
    }
    return con;
}
void show_info(int mode,float distance,float consumed)
{
    if(mode==0)
        printf("Fuel consumption is %.2f liters per 100km.\n",consumed/(distance/100));
    else
        printf("Fuel consumption is %.1f mile per gallon\n",distance/consumed);
}




