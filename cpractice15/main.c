#include <stdio.h>
#include <stdlib.h>

/* ��������������m��n���������Լ������С�������� */
int main()
{
    /*
    ����һ��
    int m,n;
    int x,y;
    int min;
    printf("������������m:\n");
    scanf("%d",&m);
    printf("������������n:\n");
    scanf("%d",&n);

    if(m<n)
        min = m;
    else
        min = n;

    for(x=min;x>1;x--){
        if((m%x == 0) && (n%x == 0)){
            printf("���Լ����%d\n",x);
            break;
        }
    }

    for(y=min;y<m*n;y++){
        if((y%m == 0) && (y%27 == 0)){
            printf("��С��������%d\n",y);
            break;
        }

    }
    */

    /* ������ */
    int m,n;
    int x,y;
    int temp;

    printf("������������m:\n");
    scanf("%d",&m);
    printf("������������n:\n");
    scanf("%d",&n);

    if(m<n){
       x=n;
       y=m;
    }
    else{
        x = m;
        y = n;
    }

    while(y>0){
        temp = x%y;
        x = y;
        y = temp;
    }

    printf("���Լ��Ϊ%d\n",x);
    printf("��С������Ϊ%d\n",m*n/x);

    printf("Hello world!\n");
    return 0;
}
