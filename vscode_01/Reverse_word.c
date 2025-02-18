#include <stdio.h>
#include <string.h>

void reverse(char *left, char* right);

int main()
{
  char arr[20] = "i like yuanfang.";
  int len = strlen(arr);
  reverse(arr,arr + len - 1);
  char* start = arr;
  while(*start){
    char* end = start;
    while (*end != ' ' && *end != '\0'){
      end++;
    }
    reverse(start,end - 1);
    if(*end != '\0'){
      end++;
    }
    start = end;
  }
  printf("%s\n", arr);
  return 0;
}

void reverse(char* left, char* right)
{
  while (left < right)
  {
    char tmp = *left;
    *left = *right;
    *right = tmp;
    left++;
    right--;
  }
}