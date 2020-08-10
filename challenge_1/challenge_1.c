#include <stdio.h>

int main() {
	int i, j;
	float average = 0, SD;
	printf("Enter 2 numbers :\n");
	scanf("%d", &i);
	scanf("%d", &j);
	
	if (i > j) {
		for (i = i; i >= j;i--) {
			printf("%d",i);
			average = average + i;
		}
		printf("\n");
	}
	else {
		for (i = i; i <= j;i++) {

			printf("%d", i);
		}
		printf("\n");
	}
	printf("%.1f", average);

}