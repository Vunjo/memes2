#include <cstdio>
#include <cmath>

int main (){
    int a, b, c;
    float x, d;

    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);
    printf("x = ");
    scanf("%f", &x);
    d = (a * pow(x,2)) + (b * x) + c;
    printf("ax^2 + bx + c = %.2f\n", d);
    return 0;
}