#include <cstddef>
#include <cstdio>
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
  FILE *file = fopen("data.txt", "w");
  if (file == nullptr) {
    cout << "failed to open the file";
  };
}
