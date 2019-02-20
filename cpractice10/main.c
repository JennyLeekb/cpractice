#include <stdio.h>
#include <stdlib.h>


/* （古典问题）兔子问题
 * 古典问题：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月
 * 后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？
 */
int main()
{
    int n,i;
    int f1=1,f2=1;
    int sum;
    printf("请输入月\n");
    scanf("%d",&n);
    if(n<=2){
        sum = 1;

    }
    else{
        for(i=1;i<(n+1)/2;i++){
            f1 = f1 + f2;
            f2 = f1 + f2;
        }
    }

    if(n%2 == 1){
        sum = f1;
    }else{
        sum = f2;
    }

    printf("第%d个月兔子总数为：%d\n",n,sum);

    printf("Hello world!\n");
    return 0;
}
