#include <stdio.h>
#include <stdlib.h>

/* ������������x,y,z���������������С��������� */
int main()
{
    int x,y,z;
    int temp;

    printf("������x\n");
    scanf("%d",&x);
    printf("������y\n");
    scanf("%d",&y);
    printf("������z\n");
    scanf("%d",&z);

    if(y < x){
        temp = x;
        x = y;
        y = temp;
    }

    if(z < x){
        temp = x;
        x = z;
        z = temp;
    }
    if(z < y){
        temp = y;
        y = z;
        z = temp;
    }

    printf("��С��������Ϊ%d,%d,%d\n",x,y,z);

    printf("Hello world!\n");
    return 0;
}
