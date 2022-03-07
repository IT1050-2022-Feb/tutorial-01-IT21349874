/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include<stdio.h>
int main(void){
	int x,count,ans=0;
	
	printf("This is an arithmetic sequence of 1+2+3+.....+x\n Enter x :");
	scanf("%d", &x);
	
	for(count=1; count<=x; count++){
	ans+=count;	
	}
	printf("The answer is : %d", ans);
	return 0;
}

