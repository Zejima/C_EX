/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
//hw_02_concatenate_two_arrays.c
//Chidinma Ejiofor
// 2/19/2019

int
main ()
{
  char str[5];
  char str2[5];
  strcpy (str, "Hello");
  strcpy (str2, "World");
  char blc[] = " ";
  strcat (str, blc);
  strcat (str, str2);

  printf (str);

  return 0;
}

