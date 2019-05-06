#include <stdio.h>

int main() {
	int number, sum;
	sum = 0;
	printf("Enter the number: \n");
	scanf("%d", &number);

	for (int i = 1; i < number; i++) {
		if ((i % 3 == 0) || (i % 5 == 0)) {
			sum = sum + i;
		}	
	   	

	}
	printf("the sum is: %d\n", sum);
	return 0;
}
