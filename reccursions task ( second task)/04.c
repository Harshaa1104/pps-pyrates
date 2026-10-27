// Reverse the digits of an integer
#include <stdio.h>

void rev(int n)
{
    if (n == 0)
        return;

    printf("%d", n % 10);
    rev(n / 10);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Reversed number = ");
    rev(n);

    return 0;
}