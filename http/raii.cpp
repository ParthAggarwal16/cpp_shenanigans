#include <cstddef>
#include <cstdio>
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
  FILE *file = fopen("data.txt", "w");
  if (file == nullptr) {
    cout << "failed to open the file";
    return 1;
  };

  fputs("hello from manual resource management", file);

  // now, lets simulate an early return
  bool someCondition = true;

  if (someCondition) {
    cout << "return early";
    return 0;
  };
}
