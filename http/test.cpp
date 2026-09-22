#include <iostream>
#include <vector>
using namespace std;

int main() {
  std::string a = "hello there";
  std::string b = std::move(a);
  cout << a << endl;
  cout << b;
}
