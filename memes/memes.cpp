#include <cstdio> //stdio == standard input output

int main() {
	int a;
	int b;
	float d;
	scanf("%d%d%f", &a, &b, &d);
	a = d + a; // a = (int)(d + (float)a);
	printf("a = %d\nd = %f\n", a, d);
	return 0;
}
