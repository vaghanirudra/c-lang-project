#include <stdio.h>

int main() 
{
    char str[]="well come";
    char *ptr=str; 
    int length=0;

    while (*ptr!='\0')
	{
        length++;
        ptr++; 
    }
    printf("String ki length hai: %d\n", length);
    return 0;
}
/*
	output
	String ki length hai: 9
*/
