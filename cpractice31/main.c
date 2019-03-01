#include <stdio.h>
#include <stdlib.h>

void quicksort(int a[],int left,int right);

/*10个数进行排序*/
//这里我用的是快排
int main()
{
    int nums[10],i=0;
    printf("please enter 10 numbers:\n");
    for(i=0;i<10;i++){
        scanf("%d",&nums[i]);
    }

    quicksort(nums,0,9);
    for(i=0;i<10;i++)
        printf(" %d -> ",nums[i]);

    printf("hello world!\n");
    return 0;
}

//快速排序
void quicksort(int a[],int left,int right){
    int temp = a[left]; //第一位为flag
    int i = left, j = right;
    //左边指针要一直小于右边指针
    while(i<j){
        //确保右边的值大于标志位的值
        while((i<j) && a[j]>temp)
            j--;

        //如果右边的值小于标志位，就将右边的值换到左边。
        if(i<j){
            a[i] = a[j];
            i++;
        }

        //确保左边的值小于lag
        while((i<j) && a[i]<temp)
            i++;

        //如果左边的值大于标志位，九江左边的值换到右边
        if(i<j){
            a[j] = a[i];
            j--;
        }
    }

        //此时i的值就是标志位应该存在的位置（左边都比它小，右边都比它大）
        a[i] = temp;

        //再分别调整左右两边
        if(left < i)
            quicksort(a,left,i-1);
        if(i < right)
            quicksort(a,j+1,right);
}
