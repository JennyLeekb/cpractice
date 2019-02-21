#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("«Î ‰»În\n");
    scanf("%d",&n);
    printf("%d = ",n);
    for(i=2;i<n;){
        if(n%i == 0){
            printf(" %d *",i);
            n = n/i;
        }
        else{
            i++;
        }
    }
    printf(" %d\n",n);


    printf("Hello world!\n");
    return 0;
}
