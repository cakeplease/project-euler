#include <stdio.h>
#include <errno.h>
#include <time.h>

int main() {


		long long triangle_number = 0;
		int divisors = 0;
		long long counter = 1;
		clock_t begin = clock();
		while (divisors < 500) {
			counter++;
			divisors = 0;
			triangle_number = 0;
			
			for (long long i = 1; i<counter; i++) {
				triangle_number += i;
			}

			for (long long j = 1; j<= triangle_number; j++) {
				if (triangle_number % j == 0) {
					divisors = divisors + 1;
					//printf("%d\n", j);
				}
				
			}
		}
		clock_t end = clock();
		double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

	printf("Triangle number %lli\nNumber of divisors: %d\n", triangle_number, divisors);
	printf("Time: %If\n", time_spent);

	return 0;

}
