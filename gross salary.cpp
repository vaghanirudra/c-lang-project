#include<stdio.h>

int main()
{
	float bs,hra,da,ta,ga;
	printf("enter base salary:");
	scanf("%f",&bs);
	printf("enter HRA(%):");
	scanf("%f",&hra);
	printf("enter DA:");
	scanf("%f",&da);
	printf("enter TA:");
	scanf("%f",&ta);
 ga=bs+hra/100.0*bs+da/100.0*bs+ta/100.0*bs;
	printf("the gross salary is(Rs):%.2f",ga);
}
/*
enter base salary:100
enter HRA():5
enter DA:8
enter TA:10
the gross salary is(Rs):123.00
*/
	
