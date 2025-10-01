#include<iostream>
int main(){
  std::cout << "Hello!" << std::endl;
  std::cout << "World" << std::endl;
  return 0;
}
// - `std::`: A namespace. Think of it as a "last name." There are many tools in the C++ world. To avoid confusion between a `cout` I might create and the official `cout`, the official one lives in the `std` (standard) namespace. We'll explore this more in Chapter 2.11.
// - `cout`: **c**haracter **out**put. An "object" that represents the standard output stream (your console/terminal).
// - `<<`: The **stream insertion operator**. Data flows in the direction of the arrows. It "shoves" the thing on its right into the thing on its left.