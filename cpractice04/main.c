#include <stdio.h>
#include <stdlib.h>

/* 输入三个整数x,y,z，请把这三个数由小到大输出。 */
int main()
{
    int x,y,z;
    int temp;

    printf("请输入x\n");
    scanf("%d",&x);
    printf("请输入y\n");
    scanf("%d",&y);
    printf("请输入z\n");
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

    printf("从小到大排序为%d,%d,%d\n",x,y,z);

    printf("Hello world!\n");
    return 0;
}
