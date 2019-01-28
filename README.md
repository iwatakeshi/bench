# bench
Dead simple benchmarking class.

## Usage

```cpp
#include <iostream>
#include <tuple>
#include <string>
#include "bench.hpp"

// Time the algorithm.
double duration = Bench::time([]() {
  // The algorithm to benchmark here.
});

std::cout << "duration: " << duration << std::endl;

// Time the algorithm and return the processed value
auto tuple = Bench::time<int>([]() {
  // ...
  return 1;
});

cout << std::to_string(std::get<0>(tuple)) << " " << std::to_string(std::get<1>(tuple)) << endl;

```
