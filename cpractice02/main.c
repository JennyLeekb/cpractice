#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*һ��������������100����һ����ȫƽ�������ټ���168����һ����ȫƽ���������ʸ����Ƕ��٣�*/
int main()
{
    int x,s1,s2;
    for(x=0;x<100000;x++){
        s1 = sqrt(x + 100);
        s2 = sqrt(x + 268);
        if((s1*s1 == (x+100)) && (s2*s2 == (x+268)))
            printf("���������%d\n",x);
    }
    printf("Hello world!\n");
    return 0;
}
