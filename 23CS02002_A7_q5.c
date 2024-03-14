#include <stdio.h>

int main()
{
    char str[1000];
    printf("Enter the string:\n");
    gets(str);

    int str_len = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        str_len++;
    }

    // printf("Length of input string: %d\n", str_len);

    for (int i = 0; i < (str_len - 1) / 2; i++)
    {
        if (str[i] != str[str_len - i - 1])
        {
            printf("The string is not a palindrome\n");
            return 0;
        }
    }

    printf("The string is a palindrome\n");

    return 0;
}