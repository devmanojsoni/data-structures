//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Saturday, October 12, 2019  */
/* Description: Indirect Recursion: A function calling another function
and then, that 'another function' calling the previous function,
in this way they must make a cycle */

// TASK: find the no. of activation records created, time & space complexcity
// no. of funtion calls and output of the program
// Revise from/See OneNote/Notebook

void funB(int); // you must declare the function before using it

void funA(int n){
    if(n>0){
        printf("%d, ",n);
        funB(n-1);// B is being called with reduced value of n
        // you must declare the function before using it
    }
}

void funA(int); // you must declare the function before using it

void funB(int n){
    if(n>1){
        printf("%d, ",n);
        funA(n/2);// A is being called with reduced (half in this case)
        // value of n
    }
}

int main() {
  
  /*Code here*/
  void funA(int);
  funA(20); // Pass a sample value and Analyse
  
  //getch();
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|