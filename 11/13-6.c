#include <stdio.h>
#include <string.h>
int is_within(char sentence[40],char target);

int main(void)
{
    char sentence[40];
    char target;
    printf("please enter a world:(enter \"quit\" to exit)\n");
    scanf("%s",sentence);
    while(getchar()!='\n')
        continue;
    while(strcmp(sentence,"quit"))
    {
        printf("please enter a char :\n");
        target=getchar();
        while(getchar()!='\n')
            continue;
        if(is_within(sentence,target))
            printf("find it!");
        else
            printf("Not find!");
        printf("please enter a world;(enter\"quit\"to exit) \n ");
        scanf("%s",sentence);
        while(getchar()!='\n')
            continue;
}
    return 0;
}

int is_within(char sentence[40],char target)
{
    int i=0,result=0;
    while(i<strlen(sentence))
        if(sentence[i++]==target)
            result =1;
    return result;

}
