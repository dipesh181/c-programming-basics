#include <stdio.h>

void change(int x)
{
    x = 50;
    printf("Value inside function = %d\n", x);
}

int main()
{
    int a = 10;

    printf("Value before function call = %d\n", a);

    change(a);   // call by value

    printf("Value after function call = %d\n", a);

    return 0;
}
