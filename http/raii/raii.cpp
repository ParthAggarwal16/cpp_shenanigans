#include <cstddef>
#include <cstdio>
#include <iostream>
#include <stdio.h>
using namespace std;

class File {
private:
  FILE *file;

public:
  File(const char *filename) {
    file = fopen(filename, "w");

    if (file == nullptr) {
      cout << "failed to open the file";
    } else {
      cout << "file opened";
    }
  }
};
