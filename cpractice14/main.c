#include <stdio.h>
#include <stdlib.h>

/*���������������Ƕ������ɴ��⣺
 *ѧϰ�ɼ�>=90�ֵ�ͬѧ��A��ʾ��60-89��֮�����B��ʾ��60�����µ���C��ʾ
 */
int main()
{
    int score;
    char grade;
    printf("������ѧϰ�ɼ�\n");
    scanf("%d",&score);
    grade = score >= 90 ? 'A': (score >= 60 ? 'B':'C') ;
    printf("�ɼ��ȼ�Ϊ��%c\n",grade);

    printf("Hello world!\n");
    return 0;
}
