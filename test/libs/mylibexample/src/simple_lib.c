#include "simple_lib.h"

void foo_bar() {
    // trigger warning, warning: 5 is a magic number; consider replacing it with a named constant [cppcoreguidelines-avoid-magic-numbers,readability-magic-numbers]
    int a[5];
    int b[5] = { 1, 2, 3, 4 };

    for (int i = 0;i < 5;i++) {
        a[i] = b[i];
    }
}