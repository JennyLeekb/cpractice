#include <stdio.h>
#include <stdlib.h>


void p(int n);

/*���õݹ麯�����÷�ʽ�����������5���ַ������෴˳���ӡ����*/
int main()
{
    printf("������5���ַ���\n");
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
