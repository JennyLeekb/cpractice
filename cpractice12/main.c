#include <stdio.h>
#include <stdlib.h>

/*��ӡ�����еġ�ˮ�ɻ���������ν��ˮ�ɻ�������ָһ����λ�������λ���������͵��ڸ�������*/
int main()
{
    int i;
    int x1,x2,x3;
    for(i=100;i<1000;i++){
        x1 = i/100;
        x2 = (i-100*x1) / 10;
        x3 = (i-100*x1-10*x2);
        if((x1*x1*x1 + x2*x2*x2 + x3*x3*x3) == i){
            printf("%d ��ˮ�ɻ���\n",i);
        }
    }

    printf("Hello world!\n");
    return 0;
}
