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

  // copy assignment
  Buffer &operator=(const Buffer &source) {
    if (this == &source) { // we are basically checking whether we are assigbing
                           // an object to itself
      return *this;
    }
    char *newdata = nullptr; // allocating new one before releasing the old one

    if (source.data != nullptr) {
      newdata = new char[strlen(source.data) + 1];
      strcpy(newdata, source.data); // fill the new one
    }

    delete[] data; // now we release the memeory currently owned by the
                   // destination

    data = newdata; // point at the new one which is now the sole onwer of it
    return *this;
  }

  // move assignment
  Buffer &operator=(Buffer &&sourceBuffer) {

    // is this address of the destination same as the one we are trying to
    // steal resource from? if yes then do nothing
    if (this != &sourceBuffer) {
      delete[] data; // release the memory currently owned by the object
      data = sourceBuffer.data; // take ownership of source object's memory

      sourceBuffer.data = nullptr; // leave the entire object in a valid and
                                   // empty state so its harmless
    }
    return *this;
  }

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
  Buffer b("hello");

  std::cout << "before assignment" << endl;
  a.print();
  b.print();

  std::cout << "assigning a to b" << endl;
  b = a;

  std::cout << " after assignment" << endl;
  a.print();
  b.print();

  std::cout << "checking independent memory" << endl;
  a.printAddress();
  b.printAddress();

  std::cout << "testing self assignment" << endl;
  a = a;

  std::cout << "printing out everything final time" << endl;
  a.print();
  b.print();
};
