#include <stdio.h>
#include <math.h>

int main()  {

	int a,b,c;
	
	a = 1;
	b = 2;
	c = 3;
	
	for (a; a < b; a++) {
		for (b = a + 1; b < c; b++) {
			for (c = b + 1; c <= 997; c++) {
				if (((c * c) == (a * a) + (b * b) && (a + b + c) == 1000)) {
					printf("%d\n", a*b*c);
					return 0;
				}
			}
		}
	}
	
	


	
	return 0;
}
