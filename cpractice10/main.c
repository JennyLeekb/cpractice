#include <stdio.h>
#include <stdlib.h>


/* ���ŵ����⣩��������
 * �ŵ����⣺��һ�����ӣ��ӳ������3������ÿ���¶���һ�����ӣ�С���ӳ�����������
 * ��ÿ��������һ�����ӣ��������Ӷ���������ÿ���µ���������Ϊ���٣�
 */
int main()
{
    int n,i;
    int f1=1,f2=1;
    int sum;
    printf("��������\n");
    scanf("%d",&n);
    if(n<=2){
        sum = 1;

    }
    else{
        for(i=1;i<(n+1)/2;i++){
            f1 = f1 + f2;
            f2 = f1 + f2;
        }
    }

    if(n%2 == 1){
        sum = f1;
    }else{
        sum = f2;
    }

    printf("��%d������������Ϊ��%d\n",n,sum);

    printf("Hello world!\n");
    return 0;
}
