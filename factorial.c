/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
// Chidinma Ejiofor
// HW 3 2/26/2019
// Purpose Compute the factorial of a given number
int main()
{
    printf("Enter an integer: ");

    int i;
    int input;
    int factorial=1;
    scanf("%d",&input);
    
    if (input<0){
        printf("Enter number greater than 0");
    }
    else
    {
        for(i=1; i<=input; i = i+1)
        {
             factorial *= i;              // factorial = factorial*i;
        }
        printf("Factorial of %d = %d ", input, factorial);
    }

    return 0;
}



