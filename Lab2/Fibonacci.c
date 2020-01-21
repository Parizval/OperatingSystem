#include <stdio.h>

int Recursion(int n )
{
    if  (n <= 1)
    {
        return n ;
    }
    else{
        return Recursion(n-1) + Recursion(n-2);
    }
}

int main()
{
    
    int  number ;  
    printf("Enter Number: ");
    scanf("%d",&number);
    printf("%d \n",Recursion(number));
    
    return 0 ; 
}