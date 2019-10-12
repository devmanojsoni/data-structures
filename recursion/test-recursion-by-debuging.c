//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Thursday, October 10, 2019  */
/* Description: Test Recursion by Debugging */
void fun(int n){
    if (n>0){
        // fun(n-1);//Head Recursion
        printf("%d ",n);
        fun(n-1);// Tail Recursion
    }
}
int main() {
  
  /*Code here*/
  int x =3;
  void fun(int);
  fun(x);
  
  getch();
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|