#include <stdio.h>
#include <stdlib.h>

/* 一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在
 * 第10次落地时，共经过多少米？第10次反弹多高？
 */
int main()
{
    float path=0,h=100;
    int i,n;
    printf("请输入第几次回落：\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        if(i==0){
            path = 100;
            continue;
        }
        path = path + h;
        h = h/2;
    }
    printf("第%d次落地共经历%f米\n",n,path);
    printf("第%d次反弹%f米\n",n,h/2);
    printf("Hello world!\n");
    return 0;
}
