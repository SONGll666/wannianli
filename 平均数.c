#include <stdio.h>

int main() {
	int count = 0;
	int number;
	int sum = 0;

	scanf("%d", &number);
	while (number != -1) {
		count++;
		sum += number;
		scanf("%d", number);
	}




	printf("ƽ����Ϊ��%f\n", 1.0 * sum / count);
	return 0;
}