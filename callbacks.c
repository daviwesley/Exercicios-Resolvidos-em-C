#include <stdio.h>
// funçao call recebe como segundo paramentro uma funcao
void call( int, void ( *f )( int ) );
void called( int );

int main( int argc, char const *argv[] ){
    printf( "start\n" );
    call( 1, called );
    printf( "end\n" );
    getchar();
    return 0;
}

void call( int a, void ( *f )( int ) ){
    printf( "doing stuff\n" );
    printf( "a: %d\n", a );
    printf( "going to call back\n" );
    // chame a função que foi passada como paramentro
    f( a * 2 );
}

void called( int b ){
    printf( "b: %d\n", b );
    printf( "b*2: %d\n", b*2 );
    printf( "call back function being called\n" );
}
