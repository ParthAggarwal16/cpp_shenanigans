#include <iostream>
#include <memory>
using namespace std;

std::unique_ptr<int> createNumber() { return std::make_unique<int>(42); }

int main() {
  std::unique_ptr<int> number = createNumber();
  cout << *number << endl;
}
