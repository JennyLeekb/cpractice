#include <stdio.h>
#include <stdlib.h>

/*��һ�������У�2/1��3/2��5/3��8/5��13/8��21/13...���������е�ǰ20��֮��*/
int main()
{
    int i;
    float x=2,y=1,sum=0,temp=0;
    for(i=0;i<20;i++){
        sum = sum + x/y;
        temp = x;
        x = x+y;
        y = temp;
    }
    printf("ǰ20��ĺ�Ϊ%f\n",sum);
    printf("Hello world!\n");
    return 0;
}
