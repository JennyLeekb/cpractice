#include <stdio.h>
#include <stdlib.h>


/*取一个整数a从右端开始的4～7位*/
int main()
{
    int a = 138;
    int b = a>>4;

    printf("%#x\n",b&0x0f);

    printf("\nHello world!\n");
    return 0;
}
