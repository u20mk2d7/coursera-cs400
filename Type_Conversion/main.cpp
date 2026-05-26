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
*/

int main() {
  // Integer division example
  int totalPoints = 95;
  int numTests = 3;
  double average1 = totalPoints / numTests;  // What happens here?
  std::cout << "Average (implicit): " << average1 << '\n';
  // Character to integer conversion
  char grade = 'A';
  int gradeValue = grade;  // ASCII conversion
  std::cout << "ASCII value of 'A': " << gradeValue << '\n';
  return 0;
}