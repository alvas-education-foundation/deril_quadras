#include <stdio.h>
int gcd(int x, int y);  

int main()
{
   int num1, num2, hcf, lcm;

   printf("Enter two integer Values:\n");
   scanf("%d\n%d", &num1, &num2);
   printf("%d\n%d\n",num1,num2);
   hcf = gcd(num1, num2);
   lcm=(num1*num2)/hcf;
   printf("GCD of %d and %d is = %d",num1,num2, hcf);
   printf("\nLCM of %d and %d is = %d",num1,num2,lcm);
   return 0;
}
int gcd(int x, int y)
{
   if (y == 0)   
   {
      return x;
   }
   else 
   {
      return gcd(y, x % y);   
   }
}