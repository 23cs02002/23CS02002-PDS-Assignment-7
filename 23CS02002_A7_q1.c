#include <stdio.h>
#include <string.h>

int main(){
    char ch,str[1000];
    int count=0;

    printf("Enter a string:\n");
    gets(str);

    printf("Enter the character:\n");
    scanf(" %c", &ch);

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i]==ch){
            count++;
        }
    }
    printf("Frequency of %c: %d", ch, count);    

    return 0;
}