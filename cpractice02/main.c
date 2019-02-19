#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？*/
int main()
{
    int x,s1,s2;
    for(x=0;x<100000;x++){
        s1 = sqrt(x + 100);
        s2 = sqrt(x + 268);
        if((s1*s1 == (x+100)) && (s2*s2 == (x+268)))
            printf("这个整数是%d\n",x);
    }
    printf("Hello world!\n");
    return 0;
}
