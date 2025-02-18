#include<stdio.h>
#include<math.h>

int main(){
  int a = 0;
  int n = 0;
  scanf("%d%d",&a,&n);
  int sum = a;
  for(int i = 2;i <= n;i++){
      sum += a * (pow(10,i) - 1)/9;
  }
  printf("sum = %d",sum);
  return 0;
}