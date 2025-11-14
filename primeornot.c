#include<stdio.h>
int main(){

    int num,count = 0, i = 1;
    printf("enter the number :");
    scanf("%d", &num);

    if(num < 0)
    {
        printf("it is not a natural number!");
    }
    else 
    {
        for(i = 1; i <= num; i++)
        {
            if(num % i == 0)
            {
                count++;
            }
        }
    
    
        if(count == 2)
        printf("it is a prime number :");
        else 
        printf("it is not a prime number :");

    }


    return 0;
}