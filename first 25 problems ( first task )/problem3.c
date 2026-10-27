// Find the sum of cubes of first n natural numbers
#include <stdio.h>
int main()
{
    int n, i;
    int sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
        sum += i * i * i;

    printf("Sum of cubes = %d", sum);
    return 0;
}
