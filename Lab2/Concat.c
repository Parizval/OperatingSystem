#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    char First[10], Second[10];
    printf("Enter the Strings: ");
    scanf("%s %s",First,Second);
    // char Answer[strlen(First)+strlen(Second)];
    printf("Concated String: %s \n",strcat(First,Second));
    return 0 ; 
}