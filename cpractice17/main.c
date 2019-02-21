#include <stdio.h>
#include <stdlib.h>

/* 求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。例如2+22+222+2222+22222(此时
共有5个数相加)，几个数相加有键盘控制 */
int main()
{
    int a,n;
    int sum=0,i,temp;

    printf("请输入a:\n");
    scanf("%d",&a);
    printf("请输入n:\n");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        temp = temp*10 + a;
        sum = sum + temp;
        printf(" %d + ",temp);
    }

    printf(" 0 = %d\n",sum);

    printf("Hello world!\n");
    return 0;
}
