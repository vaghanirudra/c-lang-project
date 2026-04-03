#include<stdio.h>

int main()
{
	float fa,sa,ta;
	printf("Enter first angle value:");
	scanf("%f",&fa);
	printf("Enter second angle value:");
	scanf("%f",&sa);
	ta=180-(fa+sa);
	printf("The third angle of the tringle is :%0.2f",ta);	
}
/*
	output
	Enter first angle value:65
	Enter second angle value:45
	The third angle of the tringle is :70.00
*/