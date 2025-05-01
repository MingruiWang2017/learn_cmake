#include "liba.h"
#include <stdio.h>

void b() {}
int y = 3;

int main() {
    a();
    printf("&a: %llx\n", (unsigned long long)&a);
    printf("&b: %llx\n", (unsigned long long)&b);
    printf("&y: %llx\n", (unsigned long long)&y);
    getchar();  // 避免程序执行完后立刻退出，便于同时运行多个程序，以观察每一个程序输出的内存地址
    return 0;
}