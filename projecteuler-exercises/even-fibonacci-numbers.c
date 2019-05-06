#include <stdio.h>

int prev, next, current, sum;

int main() {

sum = 0;
prev = 1;
next = 0;
current = 2;
	while (current < 4000000) {
		if (current % 2 == 0) {
			sum += current;
		}
		next = current + prev;
		prev = current;
		current = next;	
	}
	printf("%d\n", sum);
	
	return 0;
}
