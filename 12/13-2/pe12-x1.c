#include <stdio.h>
#include "pe12-2a.h"
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