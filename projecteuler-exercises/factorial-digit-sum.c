#include <stdio.h>
#include <time.h>

int main() {
	
	int sum = 0;
	unsigned long long res = 1;
	int digit;

	clock_t start = clock();


	for (int i = 1; i<=50; i++) {
		res = res * i;
	}

	printf("%llu\n", res);

	
	while(res>0) {
		digit = res % 10;
		res /= 10;
		sum += digit;
		//printf("Digit: %d\n",digit);
		
	}
	printf("Sum: %d\n", sum);
	
	clock_t end = clock();

	double time_spent = (double)(end-start) / CLOCKS_PER_SEC;
	
	printf("Time spent: %If\n", time_spent);
	
	return 0;
}

