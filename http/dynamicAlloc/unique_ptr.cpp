#include <cstddef>
#include <iostream>
#include <memory>
#include <stdio.h>
using namespace std;

int main() {
  std::unique_ptr<int> ptr = std::make_unique<int>(42);
  std::cout << *ptr << '\n';
}
