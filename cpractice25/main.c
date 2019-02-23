#include <stdio.h>
#include <stdlib.h>

int f(int num);

/* 利用递归方法求5! */
int main()
{
    int n;
    printf("请输入n:\n");
    scanf("%d",&n);

    printf("%d的阶乘为： %d \n",n,f(n));

    printf("Hello world!\n");
    return 0;
}

int f(int num){
    if(num == 1)
        return 1;
    else
        return num * f(num-1);
}
