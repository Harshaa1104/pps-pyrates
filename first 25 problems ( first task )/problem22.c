// Read input until a positive number is entered
#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("Enter a positive number: ");
        scanf("%d", &n);
    } while(n <= 0);

    printf("Positive number = %d", n);
    return 0;
}