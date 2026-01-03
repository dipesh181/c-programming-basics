#include <stdio.h>

// Function with arguments
void add(int a, int b)
{
    int sum;
    sum = a + b;
    printf("Sum = %d", sum);
}

int main()
{
    add(10, 20);   // function call
    return 0;
}
