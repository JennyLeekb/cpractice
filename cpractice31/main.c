#include <stdio.h>
#include <stdlib.h>

void quicksort(int a[],int left,int right);

/*10������������*/
//�������õ��ǿ���
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

//��������
void quicksort(int a[],int left,int right){
    int temp = a[left]; //��һλΪflag
    int i = left, j = right;
    //���ָ��ҪһֱС���ұ�ָ��
    while(i<j){
        //ȷ���ұߵ�ֵ���ڱ�־λ��ֵ
        while((i<j) && a[j]>temp)
            j--;

        //����ұߵ�ֵС�ڱ�־λ���ͽ��ұߵ�ֵ������ߡ�
        if(i<j){
            a[i] = a[j];
            i++;
        }

        //ȷ����ߵ�ֵС��lag
        while((i<j) && a[i]<temp)
            i++;

        //�����ߵ�ֵ���ڱ�־λ���Ž���ߵ�ֵ�����ұ�
        if(i<j){
            a[j] = a[i];
            j--;
        }
    }

        //��ʱi��ֵ���Ǳ�־λӦ�ô��ڵ�λ�ã���߶�����С���ұ߶�������
        a[i] = temp;

        //�ٷֱ������������
        if(left < i)
            quicksort(a,left,i-1);
        if(i < right)
            quicksort(a,j+1,right);
}
