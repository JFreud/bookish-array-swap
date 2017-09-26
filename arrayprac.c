#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
  int arr[10];
  srand(time(NULL));
  int i;
  for (i = 0; i < 10; i++){
    arr[i] = rand();
  }
  arr[9] = 0;
  printf("My array:\n");
  for (i = 0; i < 10; i++){
    printf("arr[%d]: %d\n", i, arr[i]);
  }
  int pirate[10];
  int *p = arr;
  int *p2 = pirate + 9;
  for (i = 0; i < 10; i++) {
    *p2 = *p;
    p++;
    p2--;
  }
  printf("My second array:\n");
  for (i = 0; i < 10; i++){
    printf("arr2[%d]: %d\n", i, pirate[i]);
  }
}
