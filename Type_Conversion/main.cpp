#include <iostream>
/*
-Wconversion: This is essential. It flags implicit conversions that may alter a
value (e.g., double to int, or unsigned to signed).

-Wshadow: This prevents "shadowing," where a local variable hides a member
variable or a global, which often leads to accidental use of the wrong type or
scope.

-Werror: Force the compiler to stop the build if any warning occurs. This forces
you to address potential conversion issues immediately rather than leaving
"TODOs" in your code. Sanitizer-Driven Development

#TODO:
dynamic_cast

static_cast

reinterpret_cast

const_cast
*/

int main() {
  
  return 0;
}