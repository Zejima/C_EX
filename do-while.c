/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
// Chidinma Ejiofor
// HW 3 2/26/2019
//Purpose Learn about do while loops while incrementing inputs
int main()
{
    int input;
    int sum=0;

do {
  printf("Enter a number not zero \n");
  scanf("%d", &input);
  sum=input+sum;
  printf("total %d \n", sum);
} while (input != 0);

   
    

    return 0;
}
