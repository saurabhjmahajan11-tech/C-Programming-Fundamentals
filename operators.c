#include <stdio.h>
int main()
{
    
    int a ;
    int b;
    printf("Enter the value" );
    scanf("%d %d" , &a , &b);

    //arithmatic operators 
    printf("ADDITION = %d\n", a + b );
    printf("SUBSTRACTION = %d\n", a - b );
    printf("MULTIPLICATION = %d\n", a * b );
    
    if(b != 0)
    {
    printf("DIVISION = %d\n", a / b );
    printf("MODULUS = %d\n", a % b );
    }
    else
    {
        printf("Division by zero is not allowed\n");
    }

    //relational operators
    printf(" a = b %d\n", a == b ); 
    printf(" a != b %d\n", a != b );
    printf(" a > b %d\n", a > b );  
    printf(" a < b %d\n", a < b );
    printf(" a >= b %d\n", a >= b );
    printf(" a <= b %d\n", a <= b );    

    //logical operators
    printf(" (a > b) && (b > 0) %d\n", (a > b) && (b > 0) );
    printf(" (a > b) || (b > 0) %d\n", (a > b) || (b > 0) );
    printf(" (a != b) %d\n", (a != b));    
    
   
   //assignment operators
    a += b;
    printf(" a += b %d\n", a );
    a -= b;
    printf(" a -= b %d\n", a );
    a *= b; 
    printf(" a *= b %d\n", a );
    a /= b;
    printf(" a /= b %d\n", a );
    a %= b;
    printf(" a %%= b %d\n", a );

    //increment and decrement operators
    a++;    
    printf(" a++ %d\n", a );
    a--;
    printf(" a-- %d\n", a );       
   
    return 0; 

}