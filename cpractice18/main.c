#include <stdio.h>
#include <stdlib.h>

/*һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ��������������6=1��2��3.���
 *�ҳ�1000���ڵ�����������
 */
int main()
{
    int sum,i,j;
    for(i=1;i<=1000;i++){
        sum = 0;
        for(j=1;j<i;j++){
            if(i%j == 0){
                sum = sum + j;
            }
        }
        if(sum == i)
            printf("%d ������\n",i);
    }

    printf("Hello world!\n");
    return 0;
}
