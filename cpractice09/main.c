#include <stdio.h>
#include <stdlib.h>


/* 打印楼梯，同时在楼梯上方打印两个笑脸 */
int main()
{
    int i,j;
    printf("\1\1\n"); /*输出两个笑脸*/
    for(i=1;i<11;i++)
    {
        for(j=1;j<=i;j++)
            printf("%c%c",219,219);
        printf("\n");
    }

    printf("Hello world!\n");
    return 0;
}
