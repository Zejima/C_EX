/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

// Chidinma Ejiofor
// HW 3 2/26/2019
// Purpose Compute the factorial of a given number and reading negative numbers
int main()
{
    printf("Enter an integer: ");

    int i; // initialize variable as int
    int input // initialize  int variable
    int factorial=1; // a factorial should start at one
    scanf("%d",&input);
    
      do { // do while loop that reads negative numbers until its greater than 0
   
      if( input> 0) { // continues to next part of code if true
         continue;
      }
	printf("Enter a number greater than 0 to continue!\n");	
    scanf("%d",&input);
      
   
   } while( input < 0 ); // will run as long as input is less than zerp
 
    if (input>0){
    {
        for(i=1; i<=input; i = i+1) // computes factorial until i is greater than input
        {
             factorial *= i;              
        }
        printf("Factorial of %d = %d ", input, factorial);
    }

    return 0;
}}


