#include <stdio.h>
#include <stdlib.h>

/*����3����a,b,c������С˳�����*/
int main()
{
    int nums[3];
    int i;
    int temp;

    printf("������������\n");
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
