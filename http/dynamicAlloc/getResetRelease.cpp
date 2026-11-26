#include <iostream>
#include <memory>
using namespace std;

int main() {
  std::unique_ptr<int> number = std::make_unique<int>(42);
  int *rawPointer = number.get();
  cout << *rawPointer << endl;
}
