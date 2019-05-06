#include <stdio.h>

int main()  {
	int sum, ss, difference;
	ss = 0;
	sum = 0;
	difference = 0;
	for (int i = 0; i <= 100; i++) {
		sum += i * i;
		ss += i;
	}
	ss = ss * ss;
	difference = ss - sum;
	printf("Sum of squares: %d\tSquare sum: %d\tDifference: %d\n", sum, ss, difference);

	return 0;
}
