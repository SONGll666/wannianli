#include <stdio.h>

int main() {
	rand (time (0));
	int number = rand() % 100 + 1;
	int count = 0;
	int guess = 0;
	printf("我想了一个从1-100的数，请猜猜看吧。看你几次能猜出来");
	do {

		scanf("%d", &guess);
		count++;
		if (guess > number) {
			printf("您输入的数大了");
		} else if (guess < number) {
			printf("您输入的数小了");
		}

	} while (guess != number);

	printf("恭喜你猜了%d次后，猜对了。\n", count);


	return 0;
}