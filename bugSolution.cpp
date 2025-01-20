```cpp
#include <vector>
#include <iostream>
#include <bitset>

int main() {
  // Using std::vector<char> for bit manipulation:
  std::vector<char> myBools(1000000 / 8 + 1); // More efficient for large number of booleans
  // ... (code to set and access individual bits) ...

  //Using std::bitset:
  std::bitset<1000000> myBitSet; //More efficient for large number of booleans
  // ... (code to set and access individual bits) ...

  std::cout << "Size (std::vector<char>): " << myBools.size() << " bytes" << std::endl;
  // std::bitset doesn't directly give size in bytes, it's optimized internally
  return 0;
}
```