//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Thursday, October 10, 2019  */
/* Description: Static and Global Variables in Recursion */
// TODO: find the output, time complexity, memory space
// and number of activation records created by the function fun
int fun(int n){
  
    if (n>0){
      // +n will always be performed in returning phase
      return fun(n-1)+n;
    }
    return 0;
}
int main() {
  
  /*Code here*/
  int x =5;
  int fun(int);
  printf("%d",fun(x));
  
  //getch();
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|