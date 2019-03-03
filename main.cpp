#include "bench.hpp"
int main() {
 double t =  bench::time([&]() -> void {
   // Do stuff
  });

  return 0;
}