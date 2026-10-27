// Demonstrate local, global and static variables
#include <stdio.h>

int g = 10;

void fun()
{
    int a = 5;
    static int b = 0;

    b++;

    printf("Local = %d\n", a);
    printf("Global = %d\n", g);
    printf("Static = %d\n", b);
}

int main()
{
    fun();
    fun();

    return 0;
}