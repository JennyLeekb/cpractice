#include <stdio.h>
#include <stdlib.h>

/*��1+2!+3!+...+20!�ĺ�*/
int main()
{
    int i,j=1,sum=0;
    for(i=1;i<=20;i++){
        j = j*i;
        sum = sum + j;
    }
    printf("ǰ��ʮ��׳�Ϊ��%d\n",sum);

    printf("Hello world!\n");
    return 0;
}
