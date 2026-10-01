#include <cstring>
#include <iostream>
using namespace std;

class Buffer {
private:
  char *data; // data is a pointer to an address of a character

public:
  Buffer(const char *text) {
    data = new char(strlen(text) + 1); // borrow memory big enough for the text
    strcpy(data, text);                // copy the text into it
  }
};
