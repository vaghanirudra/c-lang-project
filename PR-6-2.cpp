#include <stdio.h>

int main()
{
	char ch[50];
	int d,count;
	printf("Enter a string : ");
	scanf("%s",ch);
	printf("\n Frequency of each letter :");
	for (d=0;ch[d]!='\0';d++)
	{
		count =1;
		if(ch[d]=='0')
		continue;
		int k;
		for(k=d+1;ch[k]!='\0';k++)
		{
			if(ch[d]==ch[k])
			{
			count++;
			ch[k]='0';
			}
		}
		printf("\n%c => %d",ch[d],count);
	}
}

/*
	output
	Enter a string : enterepreneur

 	Frequency of each letter :
	e => 5
	n => 2
	t => 1
	r => 3
	p => 1
	u => 1
*/