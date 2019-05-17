/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
// Chidinma Ejiofor
//HW3 2/26/2019
// Purpose is to compare strings 
int
main ()
{
  char str1[] = "newday";
  char str2[] = "NEWDAY";

  int comp = strcmp (str1, str2);
  if (comp < 0)
    {
      printf ("newday is not equal to NEWDAY");
    }
  else if (comp > 0)
    {
      printf ("newday is not equal to NEWDAY");
    }
  else
    {
      printf ("newday is equal to NEWDAY");
    }

  return 0;
}
