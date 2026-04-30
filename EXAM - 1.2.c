#include <stdio.h>

int main() {
    int a[50], n, i, max;

    printf("size of arry: ");
    scanf("%d", &n);

    printf("enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    max = a[0];

    for(i = 1; i < n; i++) {
        if(a[i] > max) {
            max = a[i];
        }
    }
    printf("Sabse bada number = %d\n", max);
}

/*
	output
	size of arry: 5
	enter 5 numbers:
	65
	34
	12
	75
	74
	Sabse bada number = 75
*/