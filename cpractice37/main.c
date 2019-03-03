#include <stdio.h>
#include <stdlib.h>

/*输入3个数a,b,c，按大小顺序输出*/
int main()
{
    int nums[3];
    int i;
    int temp;

    printf("请输入三个数\n");
    for(i=0;i<3;i++)
        scanf("%d",&nums[i]);

    if(nums[0] > nums[1]){
        temp = nums[0];
        nums[0] = nums[1];
        nums[1] = temp;
    }

    if(nums[0] > nums[2]){
        temp = nums[0];
        nums[0] = nums[2];
        nums[2] = temp;
    }

    if(nums[1] > nums[2]){
        temp = nums[1];
        nums[1] = nums[2];
        nums[2] = temp;
    }

    for(i=0;i<3;i++)
        printf(" %d ",nums[i]);


    printf("\nHello world!\n");
    return 0;
}
