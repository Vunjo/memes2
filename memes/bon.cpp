#include <cstdio>

int main() {
	int a, b, c, d;

	scanf("%d%d", &a, &b);
	c = a / b;
	d = a % b;
	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);

	return 0;
}
