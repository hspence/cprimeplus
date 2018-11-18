#include <stdio.h>
#include <limits.h>

_Static_assert(CHAR_BIT==16,"16-bit char falsely assumed");
//_Static_assert 断言为false会直接无法通过编译,而assert()是会使程序停止运行
int main(void)
{
    puts("char is 16 bits.");

    return 0;
}
