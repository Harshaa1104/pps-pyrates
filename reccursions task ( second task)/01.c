// Print numbers from 1 to N using recursion
#include <stdio.h>

void print(int n)
{
    if (n == 0)
        return;

    print(n - 1);
    printf("%d\n", n);
}

int main()
{
    int n;

    printf("Enter N: ");
    scanf("%d", &n);

    print(n);

    return 0;
}