#include <stdio.h>
#include <stdlib.h>


/* ��ӡ¥�ݣ�ͬʱ��¥���Ϸ���ӡ����Ц�� */
int main()
{
    int i,j;
    printf("\1\1\n"); /*�������Ц��*/
    for(i=1;i<11;i++)
    {
        for(j=1;j<=i;j++)
            printf("%c%c",219,219);
        printf("\n");
    }

    printf("Hello world!\n");
    return 0;
}
