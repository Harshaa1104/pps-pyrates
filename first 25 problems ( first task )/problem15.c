// Check whether a number is perfect
#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter a positive number: ");
    scanf("%d", &n);

    for(i = 1; i <= n / 2; i++)
    {
        if(n % i == 0)
            sum += i;
    }

    if(n > 1 && sum == n)
        printf("Perfect number");
    else
        printf("Not a perfect number");

    return 0;
}