// Find the sum of numbers until -1 is entered
#include <stdio.h>
int main()
{
    int n, sum = 0;
    do
    {
        printf("Enter a number (-1 to stop): ");
        scanf("%d", &n);

        if(n != -1)
            sum += n;

    } while(n != -1);

    printf("Sum = %d", sum);
    return 0;
}