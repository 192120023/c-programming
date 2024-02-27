#include<stdio.h>

int main() {

   int n, r, s = 0;

   printf("Enter a number:");
   scanf("%d", &n);

   while (n > 0) {
       r = n % 10;
       if (r % 2 == 0) {
           s = s + r;
       }
       n = n / 10;
   }
   printf("Sum of even digits is:%d", s);

   return 0;
}

