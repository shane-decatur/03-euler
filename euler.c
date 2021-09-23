#include <stdio.h>

int problem1(){
  int sum = 0;
  int i;
  for (i = 3; i < 1000; i++){
    if (i % 3 == 0 || i % 5 == 0){
      sum += i;
    }
  }
  return sum;
}

int main(){
  printf("problem1 = %d\n",problem1());
}
