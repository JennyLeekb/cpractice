#include <stdio.h>
#include <stdlib.h>

/* ��s=a+aa+aaa+aaaa+aa...a��ֵ������a��һ�����֡�����2+22+222+2222+22222(��ʱ
����5�������)������������м��̿��� */
int main()
{
    int a,n;
    int sum=0,i,temp;

    printf("������a:\n");
    scanf("%d",&a);
    printf("������n:\n");
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
