#include<stdio.h>

//prototype
int sum(int, int);

int main(void){
  int sum;
  result = sum(3,4);
  printf("The sum is %d.\n", result);
  return 0;
}

//the sum function
int sum(int x, int y){
  int compute;
  compute = x*y;
  //use this return function for the result, or you will get a non-void function errror
  return(compute); 
}
