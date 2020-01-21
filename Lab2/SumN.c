#include <stdio.h>

int main()
{
    int n,i = 0 ,answer =  0 ;
    printf("Enter Number: ");
    scanf("%d",&n);
    for(int i = 1  ; i <= n; i++)
    {
        answer += i ;  
    }
    printf("Answer: %d \n",answer);
    return 0 ; 
}