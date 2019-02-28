#include <stdio.h>
#include <stdlib.h>

/*请输入星期几的第一个字母来判断一下是星期几，如果第一个字母一样，则继续判断第二个字母。*/
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
                    printf("please enter another letter！\n");
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
                    printf("please enter another letter！\n");
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
