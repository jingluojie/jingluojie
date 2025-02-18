#include<stdio.h>
#include<math.h>

int main(){
  for(int i = 2;i<=100000;i++){
    if(i < 1000){
      int lab = i;
      int a = lab % 10;
      lab /= 10;
      int b = lab % 10;
      lab /= 10;
      int c = lab % 10;
      if(pow(a,3) + pow(b,3) + pow(c,3) == i){
        printf("%d ",i);
      }
    }
    if(i >=1000 && i < 10000){
      int lab = i;
      int a = lab % 10;
      lab /= 10;
      int b = lab % 10;
      lab /= 10;
      int c = lab % 10;
      lab /= 10;
      int d = lab % 10;
      if(pow(a,3)+pow(b,3)+pow(c,3)+pow(d,3)==i){
        printf("%d ",i);
      }
    }
    if(i >= 10000 && i <100000){
        int lab = i;
      int a = lab % 10;
      lab /= 10;
      int b = lab % 10;
      lab /= 10;
      int c = lab % 10;
      lab /= 10;
      int d = lab % 10;
      lab /= 10;
      int e = lab % 10;
      if(pow(a,3)+pow(b,3)+pow(c,3)+pow(d,3) + pow(e,3)==i){
        printf("%d ",i);
      }
    }
  }
    
  return 0;
}