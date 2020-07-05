#include<stdio.h>
 int checkPalindrome();
  int main()
 {
      int num;

      printf("Enter the number: ");
      scanf("%d", &num);
      printf("%d\n",num);
      checkPalindrome();
      if(checkPalindrome(num) == 0)
      printf("%d is a palindrome number.\n",num);
      else
      printf("%d is not a palindrome number.\n",num);

      return 0;
 }
 int checkPalindrome(int num)
 {
   int temp, rem, sum=0;

   temp = num;

   while( num!=0 )
   {
       rem = num % 10;
       sum = sum*10 + rem;
       num /= 10;
   }

   if ( sum == temp )
   {
   return 0;
   }

   else
   {
       return 1;
   }
 }