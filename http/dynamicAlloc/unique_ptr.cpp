#include <iostream>
#include <memory>
#include <utility>

int main() {
  std::unique_ptr<int> a = std::make_unique<int>(42);
  std::unique_ptr<int> b = std::move(a);

  std::cout << "a: " << (a ? "owns something" : "empty") << '\n';
  std::cout << "b: " << *b << '\n';
}
