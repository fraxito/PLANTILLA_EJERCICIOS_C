#include <assert.h>

// Declaración de la función sum
int sum(int a, int b);

void test_sum() {
    assert(sum(1, 2) == 3);
    assert(sum(-1, 1) == 0);
    assert(sum(-1, -1) == -2);
    assert(sum(0, 0) == 0);
}

int main() {
    test_sum();
    printf("All tests passed!\n");
    return 0;
}
