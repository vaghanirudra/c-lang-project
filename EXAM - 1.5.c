#include <stdio.h>

int main()
{
    int rows = 5;

    for (int i = 1; i <= rows; i++)
	 {
        for (int j = 1; j <= i; j++)
		 {
            printf("%d ",i*i);
        }
        printf("\n"); 
	}
  
}

/*
	output
	1
	4 4
	9 9 9
	16 16 16 16
	25 25 25 25 25
*/