#include<stdio.h>

union complex
{
    int real ; 
    int imaginary ; 
};

void addition_real(union complex a, union complex b );
void addition_imagine(union complex a, union complex b );

void subtraction_real(union complex a ,  union complex b);
void subtraction_imagine(union complex a ,  union complex b);

int main()
{
    union complex one ; 
    union complex two ; 

    one.real = 5 ; 
    two.real = 10 ; 
    
    printf("%d %d \n", one.real,two.real);
    
    addition_real(one,two);
    subtraction_real(one,two);

    one.imaginary = 50;
    two.imaginary = 100;

    addition_imagine(one,two);
    subtraction_imagine(one,two);
    
    return 0 ; 
}

void addition_real(union complex a  , union complex b )
{
    int real = a.real + b.real ; 
    printf("Add  Real :  %d \n",real);
    
}

void addition_imagine(union complex a  , union complex b )
{
    int real = a.imaginary + b.imaginary ; 
    printf("Add  imaginary :  %d \n",real);
    
}


void subtraction_real(union complex a  , union complex b )
{
    int real = a.real - b.real ; 
    printf("Sub  Real :  %d \n",real);
    
}


void subtraction_imagine(union complex a  , union complex b )
{
    int real = a.imaginary - b.imaginary ; 
    printf("Sub  imaginary :  %d \n",real);
    
}
