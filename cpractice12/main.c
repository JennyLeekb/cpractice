#include <stdio.h>
#include <stdlib.h>

/*打印出所有的“水仙花数”，所谓“水仙花数”是指一个三位数，其各位数字立方和等于该数本身。*/
int main()
{
    int i;
    int x1,x2,x3;
    for(i=100;i<1000;i++){
        x1 = i/100;
        x2 = (i-100*x1) / 10;
        x3 = (i-100*x1-10*x2);
        if((x1*x1*x1 + x2*x2*x2 + x3*x3*x3) == i){
            printf("%d 是水仙花数\n",i);
        }
    }

    printf("Hello world!\n");
    return 0;
}
