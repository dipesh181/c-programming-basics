#include <stdio.h>

int main()
{
    FILE *fp;
    char text[50];

    fp = fopen("data.txt", "a");

    printf("Enter text to append: ");
    gets(text);

    fprintf(fp, "\n%s", text);

    fclose(fp);

    printf("Data appended successfully");

    return 0;
}
