#include <stdio.h>
    int main ()
    {
 
        int a[10][10],i, j, m, n, b = 0, sum = 0;
 
        printf("Enetr the order of the matix \n");
        scanf("%d %d", &m, &n);
        printf("%d %d\n",m,n);
 
        if (m == n ) 
        {
 
            printf("Enter the co-efficients of the matrix\n");
            for (i = 0; i < m; ++i)
            {
                for (j = 0; j < n; ++j)
                {
                    scanf("%d\t", &a[i][j]);
                    printf("%d\t",a[i][j]);
                }
                printf("\n");
            }

            for (i = 0; i < m; ++i) 
            {
                sum = sum + a[i][i];
                b = b + a[i][m - i - 1];
            }
 
            printf("\nThe sum of the principle diagonal elements is = %d\n", sum);
            printf("The sum of the secondary diagonal elements is   = %d\n", b);
 
        }
 
        else
            printf("The given order is not square matrix\n");
    }