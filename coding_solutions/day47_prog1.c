#include<stdio.h>

int main()
{
    
    int a[50], n, i, big, small;

    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("%d\n",n);

    printf("Enter the %d elements of the array: \n",n);
    for(i = 0; i < n; i++)
    {
    scanf("%d", &a[i]);
    printf("%d\t",a[i]);
}
    big = a[0]; 
    for(i = 1; i < n; i++)
    {
        if(big < a[i])   
        {
            big = a[i]; 
        }
    }
    printf("\nThe largest element is: %d\n", big);

    small = a[0];   
    for(i = 1; i < n; i++)
    {
        if(small>a[i])   
        {
            small = a[i];   
        }
    }
    printf("The smallest element is: %d\n", small);
    return 0;
}