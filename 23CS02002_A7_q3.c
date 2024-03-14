#include <stdio.h>
#include <string.h>

int reverse_string(char str[], int left_ele, int right_ele)
{
    if (right_ele<= left_ele){
        return 0;
    }

    char temp = str[right_ele];
    str[right_ele] = str[left_ele];
    str[left_ele] = temp;

    reverse_string(str, left_ele + 1, right_ele - 1);
}

int main()
{
    char str[1000];
    printf("Enter the string:\n");
    gets(str);

    reverse_string(str, 0, strlen(str) - 1);

    printf("%s", str);

    return 0;
}