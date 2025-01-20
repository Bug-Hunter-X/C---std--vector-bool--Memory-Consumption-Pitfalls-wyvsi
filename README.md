# C++ std::vector<bool> Memory Consumption Pitfalls

This repository demonstrates a common, yet subtle, issue encountered when using `std::vector<bool>` in C++.  The `std::vector<bool>` specialization, while designed for potential memory optimization, often leads to unexpected memory usage and performance problems due to implementation-specific details. It doesn't necessarily store booleans as single bits, resulting in higher memory consumption than anticipated.

The `bug.cpp` file illustrates how `std::vector<bool>` might consume more memory than expected, even for a large number of booleans. This can lead to performance issues and memory-related bugs, particularly when dealing with substantial datasets.

The `bugSolution.cpp` file offers alternative solutions for efficiently handling large collections of booleans. These include using `std::vector<char>` (or `std::vector<unsigned char>`) for bit manipulation or exploring specialized bitset libraries for optimal memory management.

## How to use:

1.  Clone the repository.
2.  Compile and run the `bug.cpp` file using a C++ compiler (e.g., g++, clang++).
3.  Observe the memory consumption compared to the expectations.
4.  Compare the results with the solution provided in `bugSolution.cpp`.