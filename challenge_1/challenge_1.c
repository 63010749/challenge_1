#include <stdio.h>
#include <math.h>

int main() {
	int i, j, n = 0, sum = 0, count = 0;
	float average, sd2;
	printf("Enter 2 numbers :\n");
	scanf("%d", &i);
	scanf("%d", &j);

	if (i > j) {
		for (i = i; i >= j; i--) {
			printf("%d ", i);
			n = n + i;
			sum = sum + i * i;
			count++;
		}
		printf("\n");
	}

	else {
		for (i = i; i <= j; i++) {
			printf("%d ", i);
			n = n + i;
			sum = sum + i * i;
			count++;
		}
		printf("\n");
	}

	average = (float)n / count;
	printf("Average = %.1f\n", average);

	sd2 = ((float)(count * sum) - (n * n)) / (count * (count - 1));

	float sqrt1 = sqrt(sd2);

	printf("S.D. = %.2f", sqrt1);

	return 0;
}