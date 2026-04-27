#include<stdio.h>

int main()
{
    int rows,cols,i,j,r,c;
    int rowsum=0,colsum=0;
    printf("Enter the array row size:");
    scanf("%d", &rows);
    printf("Enter the array column size:");
    scanf("%d", &cols);
    int a[rows] [cols];
    printf("\nEnter array elements:\n");
    for (i=0; i<rows; i++)
	{
        for(j=0;j<cols;j++)
		 {
         printf("a[%d][%d] = ",i,j);
         scanf("%d", &a[i][j]);
   		 }
    }
    printf("\nEnter row number:");
    scanf("%d",&r);
    if (r>=0&&r<rows) 
	{
        printf("Elements of row %d:", r);
        for (j=0;j<cols;j++) {
            printf("%d", a[r][j]);
            if (j<cols-1) 
			printf(", ");
            rowsum+=a[r][j];
        }
        printf("\nThe sum of row %d: %d\n", r, rowsum);
    } else 
	{
        printf("Invalid row\n");
    }
    printf("\nEnter column number: ");
    scanf("%d",&c);
    if (c>=0&&c<cols) {
        printf("Elements of column %d: ",c);
        for (i=0;i<rows;i++) {
            printf("%d",a[i][c]);
            if (i<rows-1) printf(", ");
            colsum+=a[i][c];
        }
        printf("\nThe sum of column %d: %d\n",c,colsum);
    } else
    {
        printf("Invalid column\n");
    }
}

/*
	output
	Enter the array row size:2
	 the array column size:2

	Enter array elements:
	a[0][0] = 3
	a[0][1] = 4
	a[1][0] = 5
	a[1][1] = 6

	Enter row number:4
	Invalid row

	Enter column number: 3
	Invalid column
*/