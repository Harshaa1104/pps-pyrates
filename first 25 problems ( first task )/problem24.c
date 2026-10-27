// Ask for PIN until the correct PIN is entered
#include <stdio.h>
int main()
{
    int pin;
    do
    {
        printf("Enter PIN: ");
        scanf("%d", &pin);
    } while(pin != 1234);

    printf("Access Granted");
    return 0;
}