#include <stdio.h>
#include <math.h>

int isPrime(long long num) {
	if (num <= 1) {
		return 0;
	}
	if (num % 2 == 0) {
		return 0;
	}
	
	for (long long i = 3; i <= sqrt(num); i+= 2) {
		if ((num % i) == 0) {
			return 0;
		}
	}
	return 1;
}

int main() {
	long long sum;
	sum = 2;
	for (long i = 3; i < 2000000; i++) {
		if(isPrime(i)) {
			sum += i;
		}
	}
	printf("%lli\n", sum);
	return 0;
}
