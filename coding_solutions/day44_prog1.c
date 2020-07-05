#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    int len = 0, i = 0, k = 0, count = 0;

    printf("Enter the string : ");
    scanf("%s",str);
    printf("%s",str);

    len=strlen(str);
    count = len;
    for (i = 0; i < len;)
    {
        switch (str[i]) 
        {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            for (k = i; k < count; k++)
            {
                str[k] = str[k + 1];
            }
            count--;
            break;
        default:
        i++;
        }
    }
    str[count] = '\0';
    printf("\nstring after removing vowels is : %s", str);
    return 0;
}