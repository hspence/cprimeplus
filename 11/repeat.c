#include <stdio.h>

int main(int argc,char * argv [])
{
    int i;
   printf("The program has %d arguments,and \n",argc-1);
   for(i=1;i<argc;i++)
    {
        printf("%dth arguments is %s \n",i,argv[i]);
}
    return 0;
}
