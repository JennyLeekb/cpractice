#include <stdio.h>
#include <stdlib.h>

/* һ���100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룻�����£�������
 * ��10�����ʱ�������������ף���10�η�����ߣ�
 */
int main()
{
    float path=0,h=100;
    int i,n;
    printf("������ڼ��λ��䣺\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        if(i==0){
            path = 100;
            continue;
        }
        path = path + h;
        h = h/2;
    }
    printf("��%d����ع�����%f��\n",n,path);
    printf("��%d�η���%f��\n",n,h/2);
    printf("Hello world!\n");
    return 0;
}
