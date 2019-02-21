#include <stdio.h>
#include <stdlib.h>

/*输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。*/
int main()
{
    char c;
    int letters=0,space=0,dig=0,others=0;
    printf("请输入一行字符:\n");
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

    printf("英文字母有 %d 个\n",letters);
    printf("数字有 %d 个\n",dig);
    printf("空格有 %d 个\n",space);
    printf("其它字符有 %d 个\n",others);

    printf("Hello world!\n");
    return 0;
}
