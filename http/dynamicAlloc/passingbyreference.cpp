#include <iostream>
#include <memory>
using namespace std;

std::unique_ptr<int> createNumber() { return std::make_unique<int>(42); }

int main() {
  std::unique_ptr<int> number = createNumber();
  int *rawPointer = number.get();
  cout << "raw pointer: " << rawPointer << endl;
  cout << "actual number:  " << *number << endl;
  cout << "original address of number:  " << number << endl;
}
