#include <stdio.h>
#include <stdlib.h>


void reverse(int *src,int *des,int n);

/*将一个数组逆序输出*/
int main()
{
    int i;
    int src[5] = {1,2,3,4,5};
    int des[5];

    reverse(src,des,5);

    for(i=0;i<5;i++)
        printf(" %d ",des[i]);


    printf("\nHello world!\n");
    return 0;
}


/*将数组逆序*/
void reverse(int *src,int *des,int n){
    int i=0;

    while(i<n){
        des[i] = src[n-i-1];
        i++;
    }
}
