#include <stdio.h>
#include <string.h>

struct fullname
{
	char fname[20];
	char lname[20];
};
struct bard
{
	struct fullname name;
	int born;
	int die;
};
int main(void)
{
	struct bard willie;
	struct bard * pt=&willie;
	//----a
	willie.born=1999;
	//----b
	pt->born=1999;
	//----c
	scanf("%d",&willie.born);
	//----d
	scanf("%d",&pt->born);
	//----e
	scanf("%s",willie.name.lname);
	//----f
	scanf("%s",pt->name.lname);
	//----g
	char ch=willie.name.fname[2];
	//----h
	int num=strlen(willie.name.fname)+strlen(willie.name.lname);
	return 0;
}
