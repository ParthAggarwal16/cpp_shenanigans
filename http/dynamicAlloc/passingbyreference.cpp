#include <memory>

std::unique_ptr<int> createNumber() { return std::make_unique<int>(42); }
