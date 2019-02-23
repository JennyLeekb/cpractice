#include <stdio.h>
#include <stdlib.h>

int p(int x,int count);

/*给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。*/
int main()
{
    int n,a=0;
    printf("请输入不多于5位的正整数:\n");
    scanf("%d",&n);

    a = p(n,a);

    printf("\n是 %d 位数\n",a);

    printf("Hello world!\n");
    return 0;
}


int p(int x,int count){
    if(x==0)
        return count;
    else{
        printf("%d ",x%10);
        count ++;
        return p(x/10,count);
    }
}
