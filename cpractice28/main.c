#include <stdio.h>
#include <stdlib.h>

int p(int x,int count);

/*��һ��������5λ����������Ҫ��һ�������Ǽ�λ�������������ӡ����λ���֡�*/
int main()
{
    int n,a=0;
    printf("�����벻����5λ��������:\n");
    scanf("%d",&n);

    a = p(n,a);

    printf("\n�� %d λ��\n",a);

    printf("Hello world!\n");
    return 0;
}


int p(int x,int count){
    if(x==0)
        return count;
    else{
        printf("%d ",x%10);
        count ++;
        return p(x/10,count);
    }
}
