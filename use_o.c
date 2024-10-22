#include <stdio.h>

extern double foo(double a, double b, double c);

int main() {
    printf("%lf\n", foo(1, 2, 3));
    return 0;
}