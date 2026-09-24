#include <cstring>
#include <iostream>

class Buffer {
private:
  char *data; // basicallt represents a pointer which can store an adrress of a
              // char object

public:
  Buffer(const char *text) { data = new char(strlen(text) + 1); };

  ~Buffer() {
    delete[] data;
    std::cout << "Destructor\n";
  }

  void print() { std::cout << data << "\n"; }
};

int main() {
  Buffer a("Hello");
  Buffer b = a;
  b.print();
}
