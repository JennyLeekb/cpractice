#include <stdio.h>
#include <stdlib.h>

int old(int n);

/*��5��������һ���ʵ�����˶����ꣿ��˵�ȵ�4���˴�2�ꡣ�ʵ�4������������˵�ȵ�
3���˴�2�ꡣ�ʵ������ˣ���˵�ȵ�2�˴����ꡣ�ʵ�2���ˣ�˵�ȵ�һ���˴����ꡣ���
�ʵ�һ���ˣ���˵��10�ꡣ���ʵ�����˶��*/
int main()
{
    printf("������� %d ��\n",old(5));

    printf("Hello world!\n");
    return 0;
}


int old(int n){
    if(n==1)
        return 10;
    else
        return 2 + old(n-1);
}
