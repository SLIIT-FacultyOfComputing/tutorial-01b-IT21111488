/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
  //variable delcaration
  int n1 , n2;
  float sum = 0, average = 0;

  //aksing the user to enter marks
  printf("Enter marks of 2 subjects : ");
  scanf("%d%d",&n1, &n2);

  //calculate sum and average
  sum = n1 + n2;
  average = sum / 2;

  //printing the average
  printf("Average : %.1f",average);
  
  return 0;
}

