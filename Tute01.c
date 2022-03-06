/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main(void) {

int m1,m2;
float avg;
  
printf("Enter your mark in first subject  ");
scanf("%d", &m1);

printf("Enter your mark in second subject  ");
scanf("%d", &m2);

avg=(m1+m2)/2.0;
printf("Your average mark is %.2f",avg);
  
  return 0;
}

