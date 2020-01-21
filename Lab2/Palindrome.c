#include <stdio.h>
#include <stdbool.h>
int main()
{
    int length ; 
    char string[100]; 
    int i ;
    bool check = true ; 

    printf("Enter the String and Length: ");
    scanf("%s %d",string,&length); 
    //printf("%s \n",string);
    
    int  reverse =  length - 1 ; 
    
    for(i =  0 ; i < length ;  i++)
    {
        if(string[i] != string[reverse] )
        {
            check = false ; 
            break ; 
        }

        reverse += -1 ; 
    }
    if (check == true)
    {
        printf("Palindrome \n");
    }
    else {
            printf("Not \n");
    }
    return 0 ;  
}