#include "stdio.h"
#include "conio.h"


/* 输出特殊图案，请在c环境中运行，看一看，Very Beautiful! */
int main()
{
  char a=168,b=219;
  printf("%c%c%c%c%c\n",b,a,a,a,b);
  printf("%c%c%c%c%c\n",a,b,a,b,a);
  printf("%c%c%c%c%c\n",a,a,b,a,a);
  printf("%c%c%c%c%c\n",a,b,a,b,a);
  printf("%c%c%c%c%c\n",b,a,a,a,b);
  return 0;
}
