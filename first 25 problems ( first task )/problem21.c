// Count the digits of a positive integer using while
#include <stdio.h>
int main()
{
    int n, count = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if(n <= 0)
        printf("Enter a positive integer");
    else
    {
        while(n > 0)
        {
            count++;
            n /= 10;
        }
        printf("Number of digits = %d", count);
    }

    return 0;
}