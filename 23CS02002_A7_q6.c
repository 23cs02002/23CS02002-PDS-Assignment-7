#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000], sub_str[1000], new_str[1000];
    printf("Enter a string:\n");
    gets(str);

    printf("Enter the substring to be searched:\n");
    gets(sub_str);

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == sub_str[0])
        {
            int pos = i;
            for (int j = 0; j < strlen(sub_str); j++)
            {
                new_str[j] = str[pos++];
            }

            if (strcmp(sub_str, new_str) == 0)
            {
                printf("The substring exits in the string\n");
                return 0;
            }
        }
    }
    
    printf("The substring does not exist in the string\n");

    return 0;
}