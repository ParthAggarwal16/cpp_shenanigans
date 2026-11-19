#include <cstddef>
#include <iostream>
#include <memory>
#include <stdio.h>
using namespace std;

int main() {
  std::unique_ptr<int> a = std::make_unique<int>(42);
  std::unique_ptr<int> b = a;
  // we are initializing a smart pointer that holds an integer
  // (for context..., something like int *ptr is a raw integer )

  std::cout << *a << '\n';
  std::cout << *b << '\n';
}
