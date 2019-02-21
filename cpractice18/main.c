#include <stdio.h>
#include <stdlib.h>

/*一个数如果恰好等于它的因子之和，这个数就称为“完数”。例如6=1＋2＋3.编程
 *找出1000以内的所有完数。
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
            printf("%d 是完数\n",i);
    }

    printf("Hello world!\n");
    return 0;
}
