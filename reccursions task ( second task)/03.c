// Count digits using recursion
#include <stdio.h>

int count(int n)
{
    if (n == 0)
        return 0;

    return 1 + count(n / 10);
}

int main()
{
    int n, c;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n == 0)
        c = 1;
    else
        c = count(n);

    printf("Number of digits = %d", c);

    return 0;
}
