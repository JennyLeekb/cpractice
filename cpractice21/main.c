#include <stdio.h>
#include <stdlib.h>

/*两个乒乓球队进行比赛，各出三人。甲队为a,b,c三人，乙队为x,y,z三人。已抽签决定
 *比赛名单。有人向队员打听比赛的名单。a说他不和x比，c说他不和x,z比，请编程序找出
 *三队赛手的名单*/
int main()
{
    char a,b,c;
    for(a='x';a<='z';a++){
        for(b='x';b<='z';b++){
            if(b!=a){
                for(c='x';c<='z';c++){
                    if(c!=a && c!=b){
                        if(a!='x' && c!='x' && c!='z'){
                            printf("a 的对手是 %c\n",a);
                            printf("b 的对手是 %c\n",b);
                            printf("c 的对手是 %c\n",c);
                        }

                    }
                }
            }
        }
    }


    printf("Hello world!\n");
    return 0;
}
