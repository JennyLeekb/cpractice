#include <stdio.h>
#include <stdlib.h>

int f(int num);

/* ���õݹ鷽����5! */
int main()
{
    int n;
    printf("������n:\n");
    scanf("%d",&n);

    printf("%d�Ľ׳�Ϊ�� %d \n",n,f(n));

    printf("Hello world!\n");
    return 0;
}

int f(int num){
    if(num == 1)
        return 1;
    else
        return num * f(num-1);
}
