#include <stdio.h>

int main()
{
    int choice;
    float a, b;

    while (1)
    {
        printf("\n=== Calculator ===\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Modulo (%%)\n");
        printf("0. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            printf("Program Ended.\n");
            break;
        }

        printf("Enter two numbers: ");
        scanf("%f %f", &a, &b);

        switch (choice)
        {
            case 1:
                printf("Result = %.2f\n", a + b);
                break;

            case 2:
                printf("Result = %.2f\n", a - b);
                break;

            case 3:
                printf("Result = %.2f\n", a * b);
                break;

            case 4:
                if (b != 0)
                    printf("Result = %.2f\n", a / b);
                else
                    printf("Error: Division by zero!\n");
                break;

            case 5:
                if ((int)b != 0)
                    printf("Result = %d\n", (int)a % (int)b);
                else
                    printf("Error: Division by zero!\n");
                break;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
/*
	output
	=== Calculator ===
	1. Addition (+)
	. Subtraction (-)
	3. Multiplication (*)
	4. Division (/)
	5. Modulo (%)
	0. Exit
	 your choice: 1
	Enter two numbers: 5
	5
	 = 10.00

	=== Calculator ===
	1. Addition (+)
	. Subtraction (-)
	3. Multiplication (*)
	4. Division (/)
	5. Modulo (%)
	0. Exit
	Enter your choice: 2
	Enter two numbers: 5
	5
	Result = 0.00

	=== Calculator ===
	1. Addition (+)
	2. Subtraction (-)
	3. Multiplication (*)
	4. Division (/)
	5. Modulo (%)
	0. Exit
	Enter your choice: 3
	Enter two numbers: 5
	5
	Result = 25.00
	
	=== Calculator ===
	1. Addition (+)
	2. Subtraction (-)
	3. Multiplication (*)
	4. Division (/)
	5. Modulo (%)
	. Exit
	 your choice: 4
	Enter two numbers: 5
	5
	Result = 1.00

	=== Calculator ===
	1. Addition (+)
	2. Subtraction (-)
	3. Multiplication (*)
	. Division (/)
	5. Modulo (%)
	. Exit
	Enter your choice: 5
	Enter two numbers: 5
	5
	 = 0

	=== Calculator ===
	. Addition (+)
	2. Subtraction (-)
	3. Multiplication (*)
	. Division (/)
	5. Modulo (%)
	0. Exit
	Enter your choice:
*/