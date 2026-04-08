#include<stdio.h>

int main()
{
	int n,first,last;
	printf("enter any number:\n");
	scanf("%d",&n);
	
	last = n % 10;
	
	while(n >= 10)
	{
		n = n /10;
	}
	first = n;
	
	printf("sum of first and last digits = %d", first + last);
}

/*
   output
   enter any number:
	4235
	sum of first and last digits = 9
*/