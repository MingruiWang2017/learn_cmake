#include <iostream>

extern int fib25;

int main() {
    std::cout << "斐波那契数列第25项: " << fib25 << std::endl;
    return 0;
}

// g++ main.cpp slow.cpp

// https://lxblog.com/qianwen/share?shareId=04279d9a-328d-4dbc-a859-10afb24a0e0f