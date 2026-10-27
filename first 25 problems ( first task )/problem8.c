// Print all factors of a given number
#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter a positive number: ");
    scanf("%d", &n);

    if(n <= 0)
        printf("Enter a positive number");
    else
    {
        for(i = 1; i <= n; i++)
        {
            if(n % i == 0)
                printf("%d ", i);
        }
    }
    return 0;
}
