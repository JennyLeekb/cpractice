#include <stdio.h>
#include <stdlib.h>

/*打印出如下图案（菱形）
   *
  ***
 *****
*******
 *****
  ***
   *
*/
int main()
{
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if((i+j) >= 3)
                printf("*");
            else
                printf(" ");
        }
        for(j=4;j<7;j++){
            if((j-i) < 4)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            if((j-i)>0)
                printf("*");
            else
                printf(" ");
        }
        for(j=4;j<7;j++){
            if((i+j)<6)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("Hello world!\n");
    return 0;
}
