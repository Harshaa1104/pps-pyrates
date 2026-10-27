// Find the sum of numbers from 1 to n using while
#include <stdio.h>
int main()
{
    int n, i = 1, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    while(i <= n)
    {
        sum += i;
        i++;
    }

    printf("Sum = %d", sum);
    return 0;
}
