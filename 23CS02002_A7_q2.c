#include <stdio.h>
#include <string.h>

int main()
{
    char ch, str[1000];
    int count = 0;

    printf("Enter a string:\n");
    gets(str);

    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] < 65 || (str[i] >= 91 && str[i] <= 96) || str[i] > 122)
        {
            for (int j = i; j < (len - 1); j++)
            {
                str[j] = str[j + 1];
            }
            str[len - 1] = '\0';
            len--;
            i--;
        }
    }

    printf("%s", str);
    return 0;
}