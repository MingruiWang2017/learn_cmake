#include <iostream>

extern int fib25;

int main() {
    std::cout << "The 25th item of Fibonacci Sequence is: " << fib25 << std::endl;
    return 0;
}

// 1. g++ -c main.cpp
// 2. g++ main.o  ../4/slow.o  使用g++与之前的slow.o进行链接
