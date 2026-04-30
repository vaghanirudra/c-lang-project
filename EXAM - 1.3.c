#include <stdio.h>

void reverse(char s[])
 {
    int len = 0, i;
    while (s[len]) len++; 

    for (i = 0;i < len / 2; i++) {
        char temp = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = temp;
    }
}
int main() {
    char str[100];
    printf("Enter string: ");
    scanf("%s", str);
    reverse(str);
    printf("Result: %s\n", str);
 
}
/*
	output
	Enter string: 4
	Result: 4

*/