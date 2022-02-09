/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
  int m1 ,m2 ;
  float avg ;

  printf("enter mark 1 :");
  scanf("%d" , &m1);

  printf("enter mark 2 :");
  scanf("%d" , &m2);

  avg = (float)(m1 + m2 )/2 ;

  printf("%.2f" , avg );
  return 0;
}

