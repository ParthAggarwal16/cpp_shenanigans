#include <iostream>
#include <memory>
#include <utility>
using namespace std;

void process(std::unique_ptr<int> number) {
  std::cout << *number << '\n';
  // just a normal function takes a unique_ptr as an input
  // and prints out the value the pointer points to
};

int main() {
  std::unique_ptr<int> number =
      std::make_unique<int>(42); // inits the unique_ptr to 42

  // calls the process to check who owns the object
  process(std::move(number));
  cout << (number ? "still owns the memory" : "no longer owns the mmeory")
       << endl;
}
