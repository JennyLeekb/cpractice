#include <stdio.h>
#include <stdlib.h>


/* ����ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿 */
int main()
{
    int year,month,date;
    int n,flag;
    printf("��������\n");
    scanf("%d",&year);
    printf("��������\n");
    scanf("%d",&month);
    printf("��������\n");
    scanf("%d",&date);

    switch(month){
    case 1:
        n = date;
        break;
    case 2:
        n = 31 + date;
        break;
    case 3:
        n = 31 + 28 + date;
        break;
    case 4:
        n = 31 + 28 + 31 + date;
        break;
    case 5:
        n = 31 + 28 + 31 + 30 + date;
        break;
    case 6:
        n = 31 + 28 + 31 + 30 + 31 + date;
        break;
    case 7:
        n = 31 + 28 + 31 + 30 + 31 + 30 + date;
        break;
    case 8:
        n = 31 + 28 + 31 + 30 + 31 + 30 + 31 + date;
        break;
    case 9:
        n = 31 + 28 + 31 + 30 + 31 + 30 + 31 +  31 + date;
        break;
    case 10:
        n = 31 + 28 + 31 + 30 + 31 + 30 + 31 +  31 + 30 + date;
        break;
    case 11:
        n = 31 + 28 + 31 + 30 + 31 + 30 + 31 +  31 + 30 + 31 + date;
        break;
    case 12:
        n = 31 + 28 + 31 + 30 + 31 + 30 + 31 +  31 + 30 + 31 + 30 + date;
        break;
     default:
         printf("data error");
         break;
    }

    if( ((year%4 == 0) &&(year%100 != 0)) || (year%400 == 0) )
        flag  = 1;
    else
        flag = 0;

    n = n + flag;

    printf("�ǵ���ĵ�%d��\n",n);

    printf("Hello world!\n");
    return 0;
}
