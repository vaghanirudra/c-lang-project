#include<stdio.h>

int main()
 {
    int i, j;
	
	for(i = 1; i <= 5; i++){
		for(j = 1; j <= i; j++){
			printf("%d ", 40 + j);
		}
		printf("\n");
	}
	
}

/*
	output
	41
	41 42
	41 42 43
	41 42 43 44
	41 42 43 44 45


*/