#include <cstring>
#include <iostream>

class Buffer {
private:
  char *data; // basicallt represents a pointer which can store an adrress of a
              // char object

public:
  Buffer(const char *text) { data = new char(strlen(text) + 1); };
};

int main() { return 0; }
