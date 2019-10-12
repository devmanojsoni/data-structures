//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Thursday, October 10, 2019  */
/* Description: Static and Global Variables in Recursion */
// TODO: find the output, time complexity, memory space
// and number of activation records created by the function fun
int x= 0; // this is a global variable and it will have a 
// separate section inside the code section
// Both Static and Global Variables have separate section 
// inside the code section
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
  printf("%d",fun(x));
  
  //getch();
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|