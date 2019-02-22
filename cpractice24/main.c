#include <stdio.h>
#include <stdlib.h>

/*求1+2!+3!+...+20!的和*/
int main()
{
    int i,j=1,sum=0;
    for(i=1;i<=20;i++){
        j = j*i;
        sum = sum + j;
    }
    printf("前二十项阶乘为：%d\n",sum);

    printf("Hello world!\n");
    return 0;
}
