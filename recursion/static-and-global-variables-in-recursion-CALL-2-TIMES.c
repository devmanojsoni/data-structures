//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Thursday, October 10, 2019  */
/* Description: Static and Global Variables in Recursion */
// TODO: Explain why there is a difference between the outputs
int fun(int n){
  static int x=0; // Static Variable, It will have a separate section 
  // inside the code section
    if (n>0){
        x++;
        return fun(n-1)+x;
    }
    return 0;
}
int main() {
  
  /*Code here*/
  int x =5;
  int fun(int);
  printf("%d\n",fun(x)); // Answer is 25
  printf("%d\n",fun(x)); // Why this is not 25 ?
  //getch();
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|