#include<stdio.h>

int main()
{
	int i,j;
	
	   for(i=5; i>= 1;i--) {
        for(j=1; j <=i;j++) {
            if(j %2==1)
                printf("1 ");
            else
                printf("3 ");
        }
        printf("\n");
    }
   
}

/*
	output
	1 3 1 3 1
	1 3 1 3
	1 3 1
	1 3
	1
*/