// Count numbers divisible by both 3 and 5 till 100
#include <stdio.h>
int main()
{
    int i, count = 0;
    for(i = 1; i <= 100; i++)
    {
        if(i % 3 == 0 && i % 5 == 0)
            count++;
    }
    printf("Count = %d", count);
    return 0;
}