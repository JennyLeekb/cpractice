#include <stdio.h>
#include <stdlib.h>


/*ȡһ������a���Ҷ˿�ʼ��4��7λ*/
int main()
{
    int a = 138;
    int b = a>>4;

    printf("%#x\n",b&0x0f);

    printf("\nHello world!\n");
    return 0;
}
