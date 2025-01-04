#include <cstdint>
#include <palgo/math.hpp>

std::uint64_t fib_inner(std::uint8_t n, std::uint64_t a, std::uint64_t b) {
  switch (n) {
  case 0:
    return a;
  case 1:
    return b;
  default:
    return fib_inner(n - 1, b, a + b);
  }
}

std::uint64_t fib(std::uint8_t n) { return fib_inner(n, 0, 1); }
