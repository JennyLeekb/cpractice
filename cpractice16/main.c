#include <stdio.h>
#include <stdlib.h>

/*����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ�����*/
int main()
{
    char c;
    int letters=0,space=0,dig=0,others=0;
    printf("������һ���ַ�:\n");
    while((c=getchar()) != '\n'){
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            letters ++;
        else if((c >='0' && c <= '9'))
            dig ++;
        else if(c == ' ')
            space ++;
        else
            others ++;
    }

    printf("Ӣ����ĸ�� %d ��\n",letters);
    printf("������ %d ��\n",dig);
    printf("�ո��� %d ��\n",space);
    printf("�����ַ��� %d ��\n",others);

    printf("Hello world!\n");
    return 0;
}
