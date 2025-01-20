std::vector<bool> is a specialized container in C++ that is often misused. It doesn't store booleans as individual bits, as one might expect for memory efficiency.  Instead, it often uses a bit more memory than a `std::vector<char>` due to implementation details and overhead.  This can lead to unexpected memory consumption when dealing with large collections of booleans.

```cpp
#include <vector>
#include <iostream>

int main() {
  std::vector<bool> myBools(1000000); // This might use more memory than expected
  std::cout << "Size: " << myBools.size() * sizeof(bool) << " bytes" << std::endl; //incorrect size calculation
  return 0;
}
```