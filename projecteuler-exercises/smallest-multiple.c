#include <stdio.h>

int main() {
	long number;
	int isDivisible, upNumber;
	isDivisible = 0;
		
	printf("Enter the number: \n");
	scanf("%d", &upNumber);
	
	number = upNumber;

	while (isDivisible == 0) {
		isDivisible = 1;
		for (int i = 2; i <= upNumber; i++) {
			if ((number % i) != 0) {
				isDivisible = 0;
				number++;
				break;
			}
		}
	}

	printf("%ld\n", number);
	
	return 0;
}
