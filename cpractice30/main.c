#include <stdio.h>
#include <stdlib.h>

/*���������ڼ��ĵ�һ����ĸ���ж�һ�������ڼ��������һ����ĸһ����������жϵڶ�����ĸ��*/
int main()
{
    char next;
    printf("please enter first letter!\n");
    while((next=getch()) != 'Y'){
            switch(next){
                case 'm':
                    printf("it is monday\n");
                    break;
                case 't':
                    printf("please enter another letter��\n");
                    if((next = getch()) == 'u')
                        printf("it is tuesday!\n");
                    else if((next = getch()) == 'h')
                        printf("it is thursday!\n");
                    else
                        printf("fault!\n");
                    break;
                case 'w':
                    printf("it is wednesday\n");
                    break;
                case 'f':
                    printf("it is friday\n");
                    break;
                case 's':
                    printf("please enter another letter��\n");
                    if((next = getch()) == 'u')
                        printf("it is sunday!\n");
                    else if((next = getch()) == 'a')
                        printf("it is saturday!\n");
                    else
                        printf("fault!\n");
                    break;
                default:
                    break;
            }
    }
    printf("Hello world!\n");
    return 0;
}
