#include <iostream>
#include <memory>
using namespace std;

void process(std::unique_ptr<int> number) { std::cout << *number << '\n'; };
