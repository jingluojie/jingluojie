#include<stdio.h>

struct S {
  int a;
  int b;
};

int main(){
  struct S a, *p = &a;
  a.a = 90;
  printf("a = %d\n",p ->a);
  return 0;
}