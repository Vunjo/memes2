#include <cstdio> //stdio == standard input output

int main() {
	int x, y;
	for (int i=0; i<10; i=i+1)
		printf("%d", i);
	printf("\n");

	int i = 0;
	while (i<10) {
		{
			printf("%d", i);
		}
		i = i+1;
	}
	printf("\n");
	return 0;
}
