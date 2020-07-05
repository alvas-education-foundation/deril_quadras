//palindrome
#include <stdio.h>
#include <string.h>
 int  main()
{
    char str[25], a[25] = {'\0'};
    int i, len= 0, flag = 0;
 
    printf("Enter a string \n");
    gets(str);
    puts(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    for (i = len - 1; i >= 0 ; i--)
    {
        a[len - i - 1] = str[i];
    }
 
    for (flag = 1, i = 0; i < len; i++)
    {
        if (a[i] != str[i])
            flag = 0;
    }
    if (flag == 1)
       printf ("%s is a palindrome \n", str);
    else
       printf("%s is not a palindrome \n", str);
}