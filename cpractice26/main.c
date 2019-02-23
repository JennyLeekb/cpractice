#include <stdio.h>
#include <stdlib.h>


void p(int n);

/*利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来*/
int main()
{
    printf("请输入5个字符：\n");
    p(5);

    printf("\nHello world!\n");
    return 0;
}

void p(int n){
    char next;
    if(n==1){
        next = getchar();
        putchar(next);
    }
    else{
        next = getchar();
        p(n-1);
        putchar(next);
    }
}
