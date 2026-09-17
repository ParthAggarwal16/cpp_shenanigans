#include <iostream>
#include <vector>

int main() {
  std::vector<bool> vecbool = {true, false, true};
  bool *p = &vecbool[0];
  std ::cout << "before" << p << "\n";

  for (int i = 0; i < 20; i++) {
    v.push_back(i);
  }
  std::cout << "after: " << *p << "\n";
}
