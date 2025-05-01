#include <iostream>

extern int fib25;

int main() {
    std::cout << "The 25th item of Fibonacci Sequence is: " << fib25 << std::endl;
    return 0;
}

// 1. g++ -c main.cpp slow.cpp  只进行编译, 得到.o文件，不链接
// 2. g++ main.o slow.o  使用g++进行链接