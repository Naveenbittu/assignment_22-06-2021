#include<stdio.h>
main()
{
  void *p;
  int a=40;
  p=&a;
  printf("%d",*(int*)p);
}
#if 0
40
#endif
