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

  ~File() {
    if (file != nullptr) {
      fclose(file);
      cout << "file closed automatically, this is essentially raii, where the "
              "destrcutor is resposible fot freeing this resource";
    }
  }

  void write(const char *text) {
    if (file != nullptr) {
      fputs(text, file);
    }
  }
};
