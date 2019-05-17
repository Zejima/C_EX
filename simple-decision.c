/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
// CHidinma Ejiofor
//Purpose Make a simple counter to increment from 0 to 9
//HW 3 2/26/2019
int
main ()
{
  int counter_a;
  for(counter_a = 0; counter_a < 10; counter_a = counter_a + 1)
    {
      if (counter_a < 5)
	{
	  printf ("counter is smaller than 5\n");
	}if (counter_a>5){
      printf ("counter is not smaller than 5\n");
    }}
  return 0;
}
