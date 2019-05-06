#include <stdio.h>

int isPalindrome(long number) {
	long rev, org;
	org = 0;
	rev = 0;
	
	org = number;
	while (number > 0)  {
		rev = rev * 10 + (number % 10);
		number = number / 10;
	}
	if (rev == org) {
		return 1;
	} else {
		return 0;
	}
}

int main() {
	int result, max;
	result = 0;
	max = 0;
	
	for (int i = 999; i >= 100; i--) {
		for (int j = 999; j >= 100; j--) {
			result = i * j;
			if (isPalindrome(result)) {
				if (result > max) {
					max = result;
				}
			}
		}
		
	}
	printf("%d\n", max);
	return 0;
}
