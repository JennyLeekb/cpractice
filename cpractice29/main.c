#include <stdio.h>
#include <stdlib.h>



/* һ��5λ�����ж����ǲ��ǻ���������12321�ǻ���������λ����λ��ͬ��ʮλ��ǧλ��ͬ�� */
int main()
{
    int a;
    printf("������һ��5λ��\n");
    scanf("%d",&a);

    if((a%10 == a/10000) && (a%100/10 == a/1000%10))
        printf("%d �ǻ�����\n",a);
    else
        printf("%d ���ǻ�����\n",a);

    printf("Hello world!\n");
    return 0;
}
