#ifndef BENCH_H
#define BENCH_H
#include <functional>
#include <string>
#include <tuple>
#include <iostream>
#include <chrono>
using std::cout;
using std::endl;
using std::function;

class Bench {
  public:
  static auto time(function<void()>const& lambda) {
    auto start = std::chrono::high_resolution_clock::now();
    lambda();
    auto stop = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = stop - start;
    return elapsed.count();
  }
  
  template <typename T>
  static T time(function<T(void)>const& lambda) {
    auto start = std::chrono::high_resolution_clock::now();\
    T solution = lambda();
    auto stop = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = stop - start;
    return std::make_tuple(elapsed.count(), solution);
  }
};

#endif
