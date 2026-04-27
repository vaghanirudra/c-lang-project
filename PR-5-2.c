#include <stdio.h>

int main()
{
    int rows, cols, i, j;
    printf("Enter the array row size:");
    scanf("%d",&rows);
    printf("Enter the array column size:");
    scanf("%d",&cols);
    int a[rows] [cols];
    printf("\nEnter array elements:");
    for(i=0; i<rows; i++)
	{
        for(j=0;j<cols;j++) 
		{
        printf("\na[%d][%d] = ",i,j);
        scanf("%d",&a [i] [j] );
        }
    }
    int largest = a[0][0];
    for(i=0;i<rows;i++) 
	{
    for(j=0;j<cols;j++) 
	{
    if(a[i][j]>largest) 
	{
      largest=a[i][j];
          }
      }
    }  
    printf("Output:The largest element is: %d\n", largest);
    
}

/*
    output
    Enter the array row size:10
	Enter the array column size:2

	Enter array elements:
	a[0][0] = 4657

	a[0][1] = 5647

	a[1][0] = 9876

	a[1][1] = 1324

	a[2][0] = 6473

	a[2][1] = 0976

	a[3][0] = 5674

	a[3][1] = 9384

	a[4][0] = 5484

	a[4][1] = 7564

	a[5][0] = 9876

	a[5][1] = 8333

	a[6][0] = 4563

	a[6][1] = 7564

	a[7][0] = 8575

	a[7][1] = 4567

	a[8][0] = 1234

	a[8][1] = 6555

	a[9][0] = 6666

	a[9][1] = 2345
	Output:The largest element is: 9876
*/
