#include<stdio.h>

int Fibonacci(int);

int main()

{

int n, i = 0, c;
printf("enter the number of elements\n");
scanf("%d",&n);
printf("%d",n);

printf("\nFibonacci series\n");

for ( c = 1 ; c <= n ; c++ )

{

printf("%d\n", Fibonacci(i));

i++; 

}

return 0;

}

int Fibonacci(int n)

{

if ( n == 0 )

return 0;

else if ( n == 1 )

return 1;

else

return ( Fibonacci(n-1) + Fibonacci(n-2) );

}