//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Sunday, October 13, 2019  */
/* Description: Nested Recursion Linear Example  */
// TASK: Analyse and find time and space complexity

int fun(int n){
  if(n>100){
    return n-10; // for any value > 100, it must return n-10
  } else {
    return fun(fun(n+11)); // for any value less than 100
    // it must return a constant value eg. 91 in this case
  }
}
int main() {
  
  /*Code here*/
  int r, r1,r2;
  int fun(int);
  //Try this
  r=fun(95); // should return 91
  // And this
  r1=fun(30); // should return 91
  // And this
  r2=fun(200); // should return 200-10=190
  printf("fun(95)= %d, fun(30)= %d, fun(200)= %d\n",r,r1,r2);
  
  //getch();
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|