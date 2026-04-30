#include <stdio.h>

int main() 
{
    int n, i,*ptr;
    int arr[50]; 

    printf("Enter number of elements (1-50): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    ptr = arr; 
    printf("\nSquares of elements are:\n");
    for (i = 0; i < n; i++) 
	{
        int value = *(ptr + i);
        printf("%d ", value * value);
    }

    printf("\n");
}

/*
	output
	Enter number of elements (1-50): 4
	Enter 4 elements:
	34
	22
	45
	34

	Squares of elements are:
	1156 484 2025 1156
*/