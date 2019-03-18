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

std::cout << "duration: " << duration << " seconds" << std::endl;

// Time the algorithm and return the processed value
auto result = bench::time<int>([]() {
  // ...
  return 1;
});

cout << std::to_string(result.first << " seconds " << result.second << endl;

```
