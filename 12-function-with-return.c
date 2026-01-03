#include <stdio.h>

// Function with return value
int add(int a, int b)
{
    return a + b;
}

int main()
{
    int result;
    result = add(5, 7);

    printf("Sum = %d", result);
    return 0;
}
