#include <cstddef>
#include <cstring>
#include <iostream>
#include <utility>
using namespace std;

class Buffer {
private:
  char *data; // data is a pointer to an address of a character

public:
  Buffer(const char *text) {
    data = new char[strlen(text) + 1];
    strcpy(data, text);
  };

  ~Buffer() {
    delete[] data; // just a normal destructor, just deletes the memory
  }

  Buffer(const Buffer &other) {
    data = new char[strlen(other.data) + 1];
    strcpy(data, other.data);
    std::cout << "copy constructor";
  };

  // will look at it again, and try and implement it again
  // Buffer(Buffer &&other) noexcept {
  //   data = other.data;
  //   other.data = nullptr;
  //   std::cout << "move constructor";
  // }

  void print() { cout << data << "\n"; }
  void printAddress() {
    cout << static_cast<void *>(data) << endl;
    // static case void tells cpp to treat data as a generic pointer
    // if we just did normal cout << data; it would have printed "hello", not
    // its address static_cast tells the complier to covert this value into
    // another compatible type so we are converting char * into void *
  };
};

Buffer createBuffer() { // this returns buffer by value
  Buffer temp("hello there from the heap!!");
  return temp;
}

int main() {

  Buffer a("hello");
  Buffer b = a;
  a.print();
  b.print();
  a.printAddress();
  b.printAddress();

  // testing return by value
  Buffer c = createBuffer();
  cout << "c";
  c.print();
};
