#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 判断101-200之间有多少个素数，并输出所有素数 */
int main()
{
    int i,j;
    int flag;
    for(i=101;i<=200;i++){
        flag = 1; //重新置位
        for(j=2;j<=sqrt(i);j++){
            if(i%j == 0){
              flag = 0;
              break;
            }
        }
        if(flag == 1)
            printf("%d 是素数\n",i);
    }
    printf("Hello world!\n");
    return 0;
}
