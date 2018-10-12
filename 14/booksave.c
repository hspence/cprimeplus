#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXTITL 40 
#define MAXAUTL 30
#define MAXBKS 10

struct book {
    char title[MAXTITL];
    char author[MAXTHUL];
    float value;
};
char * s_gets(char *st,int n);

int main(void)
{
    struct book library[MAXBKS]
    FILE * pbooks;
    int count=0,filecount,index;

    if((pbooks=fopen("book.dat","a+b"))==NULL)
    {
        fprintf(stderr,"Error opening file book.dat\n");
        exit(EXIT_FAILURE);
    }
    rewind(pbooks);
    while(count<MAXBKS && fread(&library[count],sizeof(struct book),1,pbooks)==1)
    {
        if(count==0)
            puts("Current contents of book.dat:");
        printf("%s by %s ($%.2f) \n",library[count].title,library[count].author,library[i].value);
        count++;
    }
    filecount=count;
    if(count==MAXBKS)
    {
        fprintf(stderr,"The book.dat file is full\n");
        exit(EXIT_FAILURE);
    }
    puts("Please add new book title:\n");
    puts("Enter a [enter] at start of line to stop.\n");
    while(count<MAXBKS && s_gets(library[count].title,MAXTITL) !=NULL && library[count].title[0] !='\0')
    {
        puts("Now input the author:\n");
        s_gets(library[count].author,MAXAUTL);
        puts("Now input the value:\n");
        scanf("%f",&library[count].value);
        while(getchar()!='\n')
            continue;
        count++;
        if(count<MAXBKS)
            puts("Please enter the next book:\n");
    }
    if (count>0) 
    {
        puts("Here is the list of your books:");
        for(index=0;index<count;index++)
        {
            printf("%s by %d ($%.2f)",library[index].title,library[index].author,library[index].value);
        }
        fwrite(&library[filecount],sizeof(struct book),count-filecount,pbooks);
    }
    printf("Done.\n");
    fclose(pbooks);


    return 0;

}
