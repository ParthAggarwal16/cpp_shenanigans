#include <iostream>
#include <memory>
using namespace std;

int main() {
  std::shared_ptr<int> first = std::make_shared<int>(42);
  cout << "value: " << *first << endl;
}
