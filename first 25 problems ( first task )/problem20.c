// Find the sum of numbers until 0 is entered
#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter a number (0 to stop): ");
    scanf("%d", &n);

    while(n != 0)
    {
        sum += n;
        printf("Enter a number (0 to stop): ");
        scanf("%d", &n);
    }

    printf("Sum = %d", sum);
    return 0;
}
