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

int main()
{	
	long long number;
	

	printf("Enter integer: ");
	scanf("%lli", &number);
	if (number == 0) {
	number = 600851475143;
	}
	printf("Is prime?: %d\n", isPrime(number));
	while (!isPrime(number)) {
		for (long long i = 2; i<=number; i++){
			if (isPrime(i)) {
			if ((number % i) == 0) {
				number = number / i;
				printf("%lli\n", i);
				break;
			}
		}
	}
	}
	printf("%lli\n", number);
	


	return 0;
}

