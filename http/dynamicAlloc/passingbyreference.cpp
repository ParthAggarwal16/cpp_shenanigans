#include <iostream>
#include <memory>
using namespace std;

void inspect(std::unique_ptr<int> &number) { cout << *number << '\n'; };

int main() {
  std::unique_ptr<int> number = std::make_unique<int>(42);
  inspect(number);
  cout << *number << '\n';
}
