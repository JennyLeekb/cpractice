#include <stdio.h>
#include <stdlib.h>

void sort(int *nums,int x,int n,int *newNums);

/*有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。*/
int main()
{

    int i;
    int nums[] = {1,2,4,5};
    int newNums[5];

    sort(nums,3,4,newNums);

    for(i=0;i<5;i++)
        printf(" %d ", newNums[i]);

    printf("\n");

    printf("Hello world!\n");
    return 0;
}


/*往数组nums(有n个数)中插入数据x*/
void sort(int *nums,int x,int n,int *newNums){
    int i=0;

    if(nums[0] > nums[n-1]){//从大到小排序
        while(nums[i] > x && i < n){
            newNums[i] = nums[i];
            i++;
        }
    }
    else{ //从小到大排列
        while(nums[i] < x && i < n){
            newNums[i] = nums[i];
            i++;
        }
    }

    newNums[i] = x;
    while(i<n){
            newNums[i+1] = nums[i];
            i++;
    }
}
