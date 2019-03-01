#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3],sum=0;
    int i,j;
    printf("please input rectangle element:\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<3;i++)
        sum = sum + a[i][i];

    for(i=0;i<3;i++)
        sum = sum +a[i][3-i-1];

    sum = sum - a[1][1];

    printf("sum is %d\n",sum);

    return 0;
}
