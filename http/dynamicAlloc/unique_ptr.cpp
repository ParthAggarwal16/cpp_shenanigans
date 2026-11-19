#include <cstddef>
#include <iostream>
#include <memory>
#include <stdio.h>
using namespace std;

int main() {
  std::unique_ptr<int> ptr = std::make_unique<int>(42);
  // we are initializing a smart pointer that holds an integer
  // (for context..., something like int *ptr is a raw integer )

  std::cout << *ptr << '\n';
}
