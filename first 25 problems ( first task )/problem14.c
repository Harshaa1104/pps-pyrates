// Check whether a three-digit number is Armstrong
#include <stdio.h>
int main()
{
    int n, temp, rem, sum = 0;
    printf("Enter a three-digit number: ");
    scanf("%d", &n);

    if(n < 100 || n > 999)
    {
        printf("Enter a three-digit number");
        return 0;
    }

    temp = n;
    while(n > 0)
    {
        rem = n % 10;
        sum += rem * rem * rem;
        n /= 10;
    }

    if(temp == sum)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");

    return 0;
}