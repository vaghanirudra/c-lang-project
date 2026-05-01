#include<stdio.h>
void Cubes(int *arr,int size) 
{
    printf("\nCubes of all elements:\n");
    for (int i=0;i<size*size;i++) {
        int val=*(arr+i);
        int cube=val*val*val;   
        printf("%d ",cube);
        if ((i+1)%size==0) 
		{
            printf("\n");
        }
    }
}
int main()
 {
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);
    int a[size][size];
    printf("Enter array elements:\n");
    for (int i=0;i<size;i++) 
	{
        for (int j=0;j<size;j++) 
		{
            printf("a[%d][%d]=",i,j);
            scanf("%d", &a[i][j]);
        }
    }
    Cubes((int *)a,size);
}

/*
	output
	Enter array size: 2
	Enter array elements:
	a[0][0]=3
	a[0][1]=2
	a[1][0]=5
	a[1][1]=4

	Cubes of all elements:
	27 8
	 64
*/
   
