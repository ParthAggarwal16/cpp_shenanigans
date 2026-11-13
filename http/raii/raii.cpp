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
      cout << "failed to open the file \n";
    } else {
      cout << "file opened \n";
    }
  }

  ~File() {
    if (file != nullptr) {
      fclose(file);
      cout << "file closed automatically, this is essentially raii, where the "
              "destrcutor is resposible fot freeing this resource \n";
    }
  }

  void write(const char *text) {
    if (file != nullptr) {
      fputs(text, file);
    }
  }
};

int main() {
  File file("data.txt");
  file.write("hello from raii, this is better i suppose :) \n");

  bool someConditoin = true;

  if (someConditoin) {
    cout << "returning early \n";
    return 0;
  }
};
