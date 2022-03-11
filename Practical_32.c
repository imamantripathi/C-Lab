#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp;
    char str[80];
    char c;
    fp = fopen("File1.txt", "a");
    FILE *fpt;
    fpt = fopen("File1.txl", "r");
    printf("Enter your message:");
    gets(str);

    fprintf(fp, "%s", str);

    printf("Your message is appended in File1.txt file.");
    c = fgetc(fpt);
    while (c != EOF)
    {
        printf("%c", c);
        c = fgetc(fpt);
    }
    fclose(fp);
    fclose(fpt);
    // File validation is to be added..
    return 0;
}