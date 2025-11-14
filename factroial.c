//write a program to find  a factorial of given number :

#include<stdio.h>

int main()
{

   int num, count, fact = 1;
   printf("enter the number :");
   scanf("%d", &num);  //take input value and stored in "num" variable

   for(count = 1; count <= num ; count++)
   {
    fact = fact * count;


   }


   printf("%d", fact);

    
    
    return 0;
}
