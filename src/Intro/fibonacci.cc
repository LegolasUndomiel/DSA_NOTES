#include "timer.h"
#include <iostream>

using uint64 = unsigned long long;

uint64 fib(unsigned int n) {
    // 递归方法
    return (n < 2 ? n : fib(n - 1) + fib(n - 2));
}

uint64 fibonacci(unsigned int n) {
    // 迭代方法
    uint64 f = 1, g = 0; // 初始时，f 为第 -1 个 Fibonacci 数，g 为第 0 个
    for (unsigned int i = 0; i < n; i++) {
        g = f + g;
        f = g - f;
    }
    return g;
}

namespace fibonacciTest {
void test(int n) {
    uint64 result;
    Timer timerFib;
    double time;

    timerFib.start();
    result = fibonacci(n);
    time = timerFib.end();
    std::cout << "------------------------------------------------------------------" << std::endl;
    std::cout << "Fibonacci number" << std::endl;
    std::cout << "------------------------------------------------------------------" << std::endl;
    std::cout << "迭代方法" << std::endl;
    std::cout << "fibonacci(" << n << ") = " << result << std::endl;
    std::cout << "Time: " << time << "ms" << std::endl;

    timerFib.start();
    result = fib(n);
    time = timerFib.end();
    std::cout << "递归方法" << std::endl;
    std::cout << "fibonacci(" << n << ") = " << result << std::endl;
    std::cout << "Time: " << time << "ms" << std::endl;
}
} // namespace fibonacciTest
