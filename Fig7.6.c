#include <stdio.h>

int cubeByValue( int n );

int main( void )
{
    int number = 5;

    printf( "The original value of number is %d", number );

    number = cubeByValue( number );

    printf( "The new value of number is %d", number );
    return 0;
}

int cubeByValue( int n )
{
    return n * n * n;
}
