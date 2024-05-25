#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main() {
    int a = 5;
    int b = 3;
    printf("Sum: %d\n", sum(a, b));
    return 0;
}
