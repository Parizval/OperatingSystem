#include <stdio.h>
#include <stdbool.h>
int main()
{
    int  n ,i;
    bool check = false ;  
    printf("Enter Number:");
    scanf("%d",&n);
    for(i = 2 ; i < n ; i++)
    {   
        if(n % i ==  0 )
        {
            check = true;
            break;
        }
    }
    if(check == true)
    {
        printf("%d is not prime\n",n);
    }
    else{
        printf("%d is prime\n",n);
    }
    return 0 ; 
}