#include <cstdio>
#include <cmath>

int main() {
    float a, b;

    printf("a = ");
    scanf("%f", &a);
    b = sin(a * M_PI/180.0f);
    printf("%.2f\n", b);
    return 0;
}