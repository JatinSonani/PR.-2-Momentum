//Q.1 Write a Program to check whether a number is even or odd using the ternary operator.

#include<stdio.h>

main()
{
	int n;
	
	printf("Enter Number\n" );
	scanf("%d" , &n);
	
	(n % 2 == 0) ? (printf("%d is Even Number\n" , n)) : (printf("%d is Odd Number\n" , n));
	 
}