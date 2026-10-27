// Find the sum of digits of a number
#include <stdio.h>
int main()
{
    int n, rem, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 0)
        n = -n;

    while(n > 0)
    {
        rem = n % 10;
        sum += rem;
        n /= 10;
    }

    printf("Sum of digits = %d", sum);
    return 0;
}
