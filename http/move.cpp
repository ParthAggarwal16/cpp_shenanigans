#include <cstddef>
#include <cstring>
#include <iostream>
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

  Buffer(Buffer &&other) noexcept {
    data = other.data;
    other.data = nullptr;
    std::cout << "move constructor";
  }

  // TODO: look back at this copy assignment and implement it again

  // // first attempt at writing copy assignment
  // Buffer &operator=(const Buffer &other) {
  //   std::cout << "my first attempt at a copy assignment";
  //   if (this == &other) {
  //     return *this;
  //   }
  //
  //   delete[] data;
  //   if (other.data == nullptr) {
  //     data = nullptr;
  //   } else {
  //     data = new char[strlen(other.data) + 1];
  //     strcpy(data, other.data);
  //   }
  //   return *this;
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

  // Buffer a("hello");
  // Buffer b("hello");
  //
  // std::cout << "before assignment";
  // a.print();
  // b.print();
  //
  // std::cout << "assigning a to b";
  // b = a;
  //
  // std::cout << " after assignment";
  // a.print();
  // b.print();
  //
  // std::cout << "checking independent memory";
  // a.printAddress();
  // b.printAddress();
  //
  // std::cout << "testing self assignment";
  // a = a;
  //
  // std::cout << "printing out everything final time";
  // a.print();
  // b.print();

};
