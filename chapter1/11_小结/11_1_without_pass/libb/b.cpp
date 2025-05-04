#include "b.h"
#include <a.h>
#include <cstdio>

void f() {
    A a;
    a.set(100);
    printf("value = %d\n", a.get());
}