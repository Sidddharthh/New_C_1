#include <stdio.h>
int main () {
int a,b;

  printf ("enter the value of num1 and num2 :");
   scanf ("%d %d", &a , &b );

   a = a + b ;
   b = a - b ;
   a = a - b ;

    printf ("After swapping value  of  a  :  %d " , a);
    printf ("After swapping value  of  b  :  %d  ", b);

    return 0;
  }
