#include<stdio.h>
#include<math.h>

int main(){
  for(int i = 0;i < 100000;i++){
      int temp = i;
      int n = 1;
      while(temp/10){
          n += 1;
          temp /= 10;
      }
      temp = i;
      int sum = 0;
      while (temp){
          sum += pow(temp%10,n);
          temp /= 10;
      }
      if(sum == i){
        printf("%d ",i);
      }
      
  }
  return 0;
}