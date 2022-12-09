#include<stdio.h>

int Fibonacci(int n){
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( Fibonacci(n-1) + Fibonacci(n-2) );
}

int main()
{
   int n, i = 0, c;
   printf("Enter the Number of Term : ");
   scanf("%d",&n);
   printf("Fibonacci series : ");
   for ( i = 1 ; i <= n ; i++ ){
      printf("%d ", Fibonacci(i));
   }

   return 0;
}
