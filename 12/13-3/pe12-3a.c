#include <stdio.h>

int main(void)
{
    int mode;
    printf("Enter 0 for metric mode,1 for US mode\n");
    scanf("%d",&mode);
    while(mode>=0)
    {
        set_mode(mode);
        get_info();
        show_info();
        printf("Enter 0 for metric mode,1 for mode (-1 to quit)\n");
        scanf("%d",&mode);
    }
    printf("Done.\n");
    return 0;
}

void set_mode(int num)
{
    mode = num;
}

void get_info()
{
    if(mode==0||mode>1)
    {   
        if(mode>1)
            printf("Invalid mode specified.Mode 1(US) used.\n");
        printf("Please Enter distance traveled in kilometers:\n"); 
        scanf("%f",&distance); 
        printf("Please Enter fuel consumed in liters:\n");
        scanf("%f",&consumed);
    }
    else if(mode==1)
    {
       printf("Please Enter distance traveled in miles:\n");
       scanf("%f",&distance);
       printf("Please Enter fuel consumed in gallon:\n");
       scanf("%f",&consumed);

    }

}
void show_info()
{
    if(mode==0||mode>1)
        printf("Fuel consumption is %.2f liters per 100km.\n",consumed/(distance/100));
    else
        printf("Fuel consumption is %.1f miles per gallon.\n",distance/consumed);

}
