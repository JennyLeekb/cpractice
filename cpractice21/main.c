#include <stdio.h>
#include <stdlib.h>

/*����ƹ����ӽ��б������������ˡ��׶�Ϊa,b,c���ˣ��Ҷ�Ϊx,y,z���ˡ��ѳ�ǩ����
 *�����������������Ա����������������a˵������x�ȣ�c˵������x,z�ȣ��������ҳ�
 *�������ֵ�����*/
int main()
{
    char a,b,c;
    for(a='x';a<='z';a++){
        for(b='x';b<='z';b++){
            if(b!=a){
                for(c='x';c<='z';c++){
                    if(c!=a && c!=b){
                        if(a!='x' && c!='x' && c!='z'){
                            printf("a �Ķ����� %c\n",a);
                            printf("b �Ķ����� %c\n",b);
                            printf("c �Ķ����� %c\n",c);
                        }

                    }
                }
            }
        }
    }


    printf("Hello world!\n");
    return 0;
}
