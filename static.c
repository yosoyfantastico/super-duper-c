#include <stdio.h>


int main() {
   char letter = 'f';
   int num = 10;
   long largeNum = 123456789L;
   float pi = 3.14159;
   double e = 2.71828;
   unsigned int hexNum = 255;
   void *ptr = NULL;

   printf("Character: %c\n", letter);// can only print one character only
   printf("Decimal: %d\n", num);
   printf("Long Decimal: %ld\n", largeNum);
   printf("Float: %f\n", pi);
   printf("Double: %lf\n", e);
   printf("Unsigned Integer in Hexadecimal: %#x\n", hexNum);
   printf("Pointer Address: %p\n", ptr);
   printf("String: %s\n", "Hello World!");

   return 0;
}