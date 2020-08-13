#include<stdio.h>

int main() {
	int num1, i, a, b, re = 0;
	scanf_s("%d", &num1);
	if (num1 > 0) {
		for (i = 0;i < num1;i++) {
			a = i % 3;
			b = i % 5;
			if (a == 0 || b == 0) {
				re += i;
			}
		}
		printf("%d", re);
	}
	else {
		printf("Error");
	}
	return 0;
}