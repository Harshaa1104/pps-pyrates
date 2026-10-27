// Create a calculator using do-while and switch
#include <stdio.h>
int main()
{
    int choice;
    float a, b;

    do
    {
        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Multiplication");
        printf("\n4. Division");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if(choice >= 1 && choice <= 4)
        {
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
        }

        switch(choice)
        {
            case 1:
                printf("Result = %.2f", a + b);
                break;

            case 2:
                printf("Result = %.2f", a - b);
                break;

            case 3:
                printf("Result = %.2f", a * b);
                break;

            case 4:
                if(b != 0)
                    printf("Result = %.2f", a / b);
                else
                    printf("Division by zero is not possible");
                break;

            default:
                printf("Invalid choice");
        }

    } while(choice != 5);

    return 0;
}
