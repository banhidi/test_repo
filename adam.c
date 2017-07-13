#include <stdio.h>
#include <stdlib.h>

int reverse(int x) {
	int y = 0;
	while (x != 0) {
		y = y * 10 + x % 10;
		x /= 10;
	}
	return y;
}

int main(int argc, char** argv) {
	if (argc != 2) {
		printf("Please give a number\n");
		exit(0);
	}
	int n = atoi(argv[1]);
	printf("n=%d\n", n);
	char ok = 0;
	for(int i = 1; i <= n / 2 && ok == 0; i++) {
		int r = reverse(i);
		if (i + r == n) {
			printf("Result is %d\n", i);
			ok = 1;
		}
	}
	if (!ok) {
		printf("No result found\n");
	}
}Szi
