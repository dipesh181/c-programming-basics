#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("data.txt", "r");
    fp2 = fopen("copy.txt", "w");

    if(fp1 == NULL)
    {
        printf("Source file not found");
        return 0;
    }

    while((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    printf("File copied successfully");

    return 0;
}
