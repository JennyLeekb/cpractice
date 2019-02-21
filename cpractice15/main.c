#include <stdio.h>
#include <stdlib.h>

/* 输入两个正整数m和n，求其最大公约数和最小公倍数。 */
int main()
{
    /*
    方法一：
    int m,n;
    int x,y;
    int min;
    printf("请输入正整数m:\n");
    scanf("%d",&m);
    printf("请输入正整数n:\n");
    scanf("%d",&n);

    if(m<n)
        min = m;
    else
        min = n;

    for(x=min;x>1;x--){
        if((m%x == 0) && (n%x == 0)){
            printf("最大公约数是%d\n",x);
            break;
        }
    }

    for(y=min;y<m*n;y++){
        if((y%m == 0) && (y%27 == 0)){
            printf("最小公倍数是%d\n",y);
            break;
        }

    }
    */

    /* 方法二 */
    int m,n;
    int x,y;
    int temp;

    printf("请输入正整数m:\n");
    scanf("%d",&m);
    printf("请输入正整数n:\n");
    scanf("%d",&n);

    if(m<n){
       x=n;
       y=m;
    }
    else{
        x = m;
        y = n;
    }

    while(y>0){
        temp = x%y;
        x = y;
        y = temp;
    }

    printf("最大公约数为%d\n",x);
    printf("最小公倍数为%d\n",m*n/x);

    printf("Hello world!\n");
    return 0;
}
