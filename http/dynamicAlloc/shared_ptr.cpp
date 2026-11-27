#include <iostream>
#include <memory>
using namespace std;

int main() {
  std::shared_ptr<int> first = std::make_shared<int>(42);
  cout << "value: " << *first << endl;
  cout << "owners: " << first.use_count() << '\n';
  shared_ptr<int> second = first;
  cout << "Owners after copying: " << first.use_count() << '\n';
}
