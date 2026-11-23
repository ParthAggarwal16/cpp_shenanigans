#include <iostream>
#include <memory>
using namespace std;

void process(std::unique_ptr<int> number) {
  std::cout << *number << '\n';
  // just a normal function takes a unique_ptr as an input
  // and prints out the value the pointer points to
};
