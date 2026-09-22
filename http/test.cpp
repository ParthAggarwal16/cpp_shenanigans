#include <iostream>
#include <memory>

int main() {
  auto first = std::make_unique<int>(42);

  std::cout << "Before move:\n";
  std::cout << "first owns: " << first.get() << '\n';
  std::cout << "value: " << *first << '\n';

  auto second = std::move(first);

  std::cout << "\nAfter move:\n";
  std::cout << "first owns: " << first.get() << '\n';
  std::cout << "second owns: " << second.get() << '\n';
  std::cout << "value: " << *second << '\n';
}
