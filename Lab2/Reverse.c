#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n ,answer = 0 ,digit;
    printf("Enter Number: ");
    scanf("%d",&n);
    while (n!= 0)
    {
        digit =  n % 10 ; 
        answer = answer*10 + digit ; 
        n = n / 10  ;   
    }

    printf("Reverse: %d \n",answer);
    return 0 ; 

}