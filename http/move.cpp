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
    cout << "this is a contructor" << endl;
  }
  ~Buffer() {
    delete[] data; // just a normal destructor, just deletes the memory
  }
  void print() { cout << data << "\n"; }
};

int main() {
  // some shit is gonna happen here
};
