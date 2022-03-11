// Check the Entered number is character or Special char or number
#include <stdio.h>
void main()
{
    char ch = ' ';
    printf("Enter the Character for check:-");
    scanf("%c", &ch);
    if (ch >= 97 && ch <= 122)
    {
        printf("The Entered Character is Small Alphabet.");
    }
    else if (ch >= 65 && ch <= 90)
    {
        printf("The Entered Character is Capital Alphabet.");
    }
    else if (ch >= 32 && ch <= 47 || ch >= 58 && ch <= 64 || ch >= 91 && ch <= 96 || ch >= 123 && ch <= 126)
    {
        printf("The Entered Character is Special Character.");
    }
    else if (ch >= 0 && ch <= 255)
    {
        printf("The Entered Character is Number.");
    }
    else{
        printf("Wrong Input");
    }
}