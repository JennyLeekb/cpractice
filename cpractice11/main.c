#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* �ж�101-200֮���ж��ٸ�������������������� */
int main()
{
    int i,j;
    int flag;
    for(i=101;i<=200;i++){
        flag = 1; //������λ
        for(j=2;j<=sqrt(i);j++){
            if(i%j == 0){
              flag = 0;
              break;
            }
        }
        if(flag == 1)
            printf("%d ������\n",i);
    }
    printf("Hello world!\n");
    return 0;
}
