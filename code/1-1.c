#include <stdio.h>

int add(int a, int b){
  return a+b;
}

int sub(int a, int b){
  return a-b;
}

int mul(int a, int b){
  return a*b;
}

int div(int a, int b){
  return a/b;
}

int main(void){
  int a = 10, b = 5;

  printf("10 + 5 = " + add(10,5));
  printf("10 - 5 = " + sub(10,5));
  printf("10 * 5 = " + mul(10,5));
  printf("10 / 5 = " + div(10,5));
  
  return 0;
}
