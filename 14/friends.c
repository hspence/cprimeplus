#include <stdio.h>
#define LEN 20

struct names {
    char first[LEN];
    char last[LEN];
};
struct guy {
    struct names handle;
    char favfood[LEN];
    char job[LEN];
    float income;
};
int main(void)
{
    struct guy fellow[2]={
    {   {"Ewen","Villard"},
        "grilled salmon",
        "personality coach",
        68112.00
    },
    {
        {"Spence","Hank"},
        "tripe",
        "Programmer",
        432400.00
    },
    };
    struct guy * him;
    printf("address : #1: %p #2: %p\n",&fellow[0],&fellow[1]);
    him=&fellow[0];
    printf("pointer : #1: %p #2: %p\n",him,him+1);
    printf("him->income is %.2f; (*him).income is %.2f \n",him->income,(*him).income);
    him++;
    printf("him->favfood is %s; (*him).favfood is %s \n",him->favfood,(*him).favfood);

    return 0;
}
