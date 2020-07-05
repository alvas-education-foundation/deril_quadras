#include <stdio.h>
#include<string.h>
int main()
{
    char str[25],temp,len;
    int i, j;
    printf("Enter the string\n");
    scanf("%s",str);
    printf("%s",str);
    len=strlen(str);
    for(i=0;i<len-1;i++)
    {
        for(j=i+1;j<len;j++)
        {
           if(str[i]>str[j])
           {
               temp=str[i];
               str[i]=str[j];
               str[j]=temp;
           }
        }
        
    }
    printf("\nSorted string in alphabetical order  is %s",str);
    return 0;
}