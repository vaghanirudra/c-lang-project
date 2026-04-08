#include<stdio.h>

int main()
{
	int n,i;
	printf("enter any number:\n");
	scanf("%d" ,&n);
	for(i=0; n!=0; i++)
	{
		n = n / 10;
	
	}
	printf("total number of digits: %d",i);
}

/* 
   output
   enter any number:
	10
	total number of digits: 2
  
*/