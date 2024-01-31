#include <stdio.h>
//temperatture convert using function
float convert(int Ftemp){
   float celcius = 5* (Ftemp-32)/9;
   return celcius;
}
int main(){
   printf("%f",(double)convert(98));
   return 0;
}