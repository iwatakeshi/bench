# bench
Dead simple benchmarking functions.

## Usage

To use this library, install [buckaroo](https://github.com/LoopPerfect/buckaroo/wiki/Installation#buckaroo) and [buck](https://github.com/LoopPerfect/buckaroo/wiki/Installation#buck). Once installed, [initialize](https://github.com/LoopPerfect/buckaroo/wiki/Commands#init) buckaroo in your project folder and run the following command:

```bash
# Add the latest version
buckaroo add github.com/iwatakeshi/latte/
# Install dependencies
buckaroo install
```

```cpp
#include <iostream>
#include <tuple>
#include <string>
#include <bench.hpp>

// Time the algorithm.
double duration = bench::time([]() {
  // The algorithm to benchmark here.
});

std::cout << "duration: " << duration << std::endl;

// Time the algorithm and return the processed value
auto tuple = bench::time<int>([]() {
  // ...
  return 1;
});

cout << std::to_string(std::get<0>(tuple)) << " " << std::to_string(std::get<1>(tuple)) << endl;

```
