#include <stdio.h>
#include <time.h>

int main () {

	int terms = 0;
	long start_number; 
	int counter = 0;
	long number;
	long final_number;

	clock_t begin = clock();
	for (long i = 4; i<1000000; i++) {
		start_number = i;	
		number = i;
		//printf("Start number: %d\n", start_number);
		counter = 0;
		while (number != 1) {
			if (number % 2 == 0) {
				number = number / 2;
				//printf("%d\n", number);
				counter++;
			} else {
				number = (number * 3) + 1;
				//printf("%d\n", number);
				counter++;
			}
		}
		if ((counter + 1) > terms) {
			terms = counter + 1;
			final_number = start_number;
		}

	}
	clock_t end = clock();
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	
printf("Final number: %li\nNumber of terms: %d\nTime: %If\n", final_number, terms, time_spent);


	


	return 0;
}
