#include <stdio.h>
#include <stdlib.h>



/* 一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同。 */
int main()
{
    int a;
    printf("请输入一个5位：\n");
    scanf("%d",&a);

    if((a%10 == a/10000) && (a%100/10 == a/1000%10))
        printf("%d 是回文数\n",a);
    else
        printf("%d 不是回文数\n",a);

    printf("Hello world!\n");
    return 0;
}
