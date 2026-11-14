#include <cstddef>
#include <stdio.h>
using namespace std;

void process() {
  int *ptr = new int(42);

  // some random process happens

  return;
  delete ptr;
}

int main() { return 0; }
