#include<stdio.h>

int main()
{
	int marks,grade;
	printf("Enter your marks:");
	scanf("%d",&marks);
	marks>80 
		? (grade='A') 
		: (marks>70 ? (grade='B')
	    : (marks>60 ? (grade='C') 
		: (marks>35 ? (grade='D')
		: (grade='F'))));
	switch(grade){
		case 'A':
			printf("Grade A\n");
			printf("congratulation ");
			break;
		case 'B':
			printf("Grade B\n");
			printf("congratulation  ");
			break;
		case 'C':
			printf("Grade C\n");
			printf("your work is good ");
			break;
		case 'D':
			printf("Grade D\n");
			printf("good work ");
			break;
		default:
			printf("Grade F\n");
			printf("said ");				
	}
	if(marks<33){
		printf("\next time prectice");
	}else{
		printf(" you are very smart");
	}
}

/* 
	output
	
  1.Enter your marks:23
	Grade F
	said
	ext time prectice
	
  2.Enter your marks:56
    Grade D
    good work  you are very smart
    
  3.Enter your marks:89
	Grade A
	congratulation  you are very smart

*/