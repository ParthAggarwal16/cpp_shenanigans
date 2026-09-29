#include <cstring>
#include <iostream>
using namespace std;

class Account {
public:
  int balance;
  std::string name;
};

int main() {
  Account a;
  cout << a.balance << endl;
}
