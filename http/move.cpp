#include <cstring>
#include <iostream>
using namespace std;

class Buffer {
private:
  char *data; // basicallt represents a pointer which can store an adrress of a
              // char object

public:
  std::string name;
  int timeout_len;
  Buffer() {
    timeout_len = 10;
    name = "whatever";
    // int *ptr = &node[prev]
    cout << "default contructor created" << endl;
  }
};

int main() {
  Buffer buffer;
  std::cout << buffer.name << endl;
}
