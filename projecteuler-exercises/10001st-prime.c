#include <stdio.h>

int isPrime(long long num) {
	if (num <= 1) {
		return 0;
	}
	for (long long i = 2; i < num; i++) {
		if ((num % i) == 0) {
			return 0;
		}
	}
	return 1;
}

int main() {
	int primeNumberFound, primesFound;
	long count, prime;
	prime = 0;
	count = 0;
	primeNumberFound = 0;
	primesFound = 0;

	while(!primeNumberFound) {
		primeNumberFound = 1;
		if (primesFound <= 10001) {
			if (isPrime(count)) {
				primesFound++;
				prime = count;
			}
			primeNumberFound = 0;
			count++;
		} 
		if (primesFound == 10001) {
			primeNumberFound = 1;
		}
	}
	
	printf("%ld\n", prime);
}

