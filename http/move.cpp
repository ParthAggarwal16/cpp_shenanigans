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
  Buffer a("hello"); // the constructor runs and prints the line 12
  Buffer b = a; // b is a branhd new obect so some constructor must run, its
                // gonna be the copy
  // constuctor, even though we didnt write it, the complier writes one for us,
  b.print();
  a.print();
  // both objects point to the same memory, this is called shallow copy, thats
  // why only one constructor gets printed, the one by complier doesnt print
  // anything then both the destructors run, first the memory is freed and the
  // when we try to delet it again, the memory is already gone,
};
