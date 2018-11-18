//name_st.h -- name_st 结构的头文件
//常量
#include <string.h>
#define SLEN 32

struct names_st
{
	char first[SLEN];
	char last[SLEN];	
};

typedef struct names_st names;
void get_names(names *);
void show_names(names *);
char * s_gets(char * st,int n);


