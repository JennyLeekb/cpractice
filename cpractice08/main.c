#include <stdio.h>
#include <stdlib.h>

/* 要求输出国际象棋棋盘。 */
int main()
{
    int i,j;
    for(i=0;i<8;i++){
        for(j=0;j<8;j++)
            if((i+j)%2==0)
                printf("%c%c",219,219);
            else
                printf("  ");
        printf("\n");
    }

    printf("Hello world!\n");
    return 0;
}
