#include <stdio.h>
#include <stdlib.h>

void sort(int *nums,int x,int n,int *newNums);

/*��һ���Ѿ��ź�������顣������һ������Ҫ��ԭ���Ĺ��ɽ������������С�*/
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


/*������nums(��n����)�в�������x*/
void sort(int *nums,int x,int n,int *newNums){
    int i=0;

    if(nums[0] > nums[n-1]){//�Ӵ�С����
        while(nums[i] > x && i < n){
            newNums[i] = nums[i];
            i++;
        }
    }
    else{ //��С��������
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
