#include <stdio.h>
#include "main.h"

void mulOf_3() {
    printf("Multiplication table of 3:\n");
    for (int i = 1; i <= 10; ++i) {
        printf("3 x %d = %d\n", i, 3 * i);
    }
}

