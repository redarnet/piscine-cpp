#include "Fixed.hpp"
#include <iostream>

int main( void ) {
Fixed a;
Fixed const b( 10 );
Fixed const c( 42.42f );
Fixed const d( b );
a = Fixed( 1234.4321f );
a > b;

return 0;
}
