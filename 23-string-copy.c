#include <stdio.h>

int main()
{
    char str1[20], str2[20];
    int i;

    printf("Enter first string: ");
    scanf("%s", str1);

    for(i = 0; str1[i] != '\0'; i++)
    {
        str2[i] = str1[i];
    }
    str2[i] = '\0';

    printf("Copied string = %s", str2);

    return 0;
}
