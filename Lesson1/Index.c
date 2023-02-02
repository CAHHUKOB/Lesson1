#include <stdio.h>

	int main() {
		int x = 5, y = 10, res;
		x += 5;
		x--;
		res = x + y;
		printf("variable: %d + %d = %d\n", x, y, res);

		return 0;
	}
