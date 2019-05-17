/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
//hw02_sum_printing.c
// Chidinma Ejiofor
// 2/19/2018

int main()
{
    int counted_events[6]= {0,1,2,3,4,5};
    int total = counted_events[0]+counted_events[1]+counted_events[2]+counted_events[3]+counted_events[4]+counted_events[5];
    printf("summation of the array =%d",total);

    return 0;
}


