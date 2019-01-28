# bench.hpp
Dead simple benchmarking class.

# Usage

```cpp
#include "bench.hpp"
#include <iostream>

double duration = Bench::time([]() {
  // The algorithm to benchmark here.
});

std::cout << "duration: " << duration << std::endl;

```

> Note: `time()` can also return a tuple containing the the duration and the returned value from the lambda function.
