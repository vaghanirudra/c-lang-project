#include <stdio.h>

int main()
{
	char str[50], ch[50];
	int k,length=0, palindrome=0;
	printf ("\nEnter Your String: ");	
	gets(str);
	for( k=0;str[k]!='\0';k++)
	{
		length++;
	}
	int l;
	for(l=0;str[l]!='\0';l++){
		ch[l]=str[length-l-1];
		k--;
	}
	printf("\nReverse string is:  %s",ch);
	for(int l=0; str[l]!=0; l++){
		if(str[l]!=ch[l]){
			palindrome=1;
		}
	}
	if(palindrome == 1)
	printf("\nThe string is not a palindrome.\n");
	else
	printf("\nThe string is a palindrome.\n");
}

/*
	output
	Enter Your String: entrepreneur

	Reverse string is:  ruenerpertne
	The string is not a palindrome.
*/