#include <stdio.h>

int main()
 {
    char ch;
    
    printf("Enter the alphabet: ");
    scanf("%c", &ch);
    
    switch (ch) 
	{
        case'a': case'e': case'i': case'o': case'u':
        case'A': case'E': case'I': case'O': case'U':
            printf("%c is a vowel.\n", ch);
            break;
            
        default:
            
            if ((ch>= 'a' && ch<= 'z') || (ch>= 'A' && ch<= 'Z')) {
                printf("%c is a consonant.\n", ch);
            } else {
                printf("%c is not an alphabet letter.\n", ch);
            }
            break;
    }
}

/*
	output
   1.Enter the alphabet: B
	B is a consonant.
   2.Enter the alphabet: i
	i is a vowel.
   3.Enter the alphabet: U
	U is a vowel.

*/  
   
	
	
	
	
	
	
	
	
