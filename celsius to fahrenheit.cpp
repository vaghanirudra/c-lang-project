#include<stdio.h>

int main()
{
	float c,f;
	printf("enter temperature(celsius):");
	scanf("%f",&c);
	f=(c*9/5)+32;
	printf("the temperature in fahrenheit:%0.2f",f);
}

/*
	output
	enter temperature(celsius):38
	the temperature in fahrenheit:100.40
*/