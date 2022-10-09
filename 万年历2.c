#include <stdio.h>

int main() {
	int year = 0;
	int month = 0;
	int day = 0;
	int week = 0;
	int j = 1;

	printf("请分别输入一个年，月，日。{输入格式2022 1 1）\n");
	scanf("%d %d %d,&year，&month,&day");
	printf("您输入的是%d年%d月%d日\n", year, month, day);

	int a[12] = {31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		a[1] = 29;
	} else {
		a[1] = 28;
	}

	week = (year - 1) + ((year - 1) / 4) - ((year - 1) / 100) + ((year - 1) / 400) + day; //网上搜的




	printf("%d年%月的日历\n", year, month, day);
	printf("日 一 二 三 四 五 六\n ");
	for (int i = 0; i < week ; i++) {
		printf(" ");
	};

	while (j < 31 ) {
		j++;
		printf("%d\r", j);
	};
	if ((j + week - 1) % 7 == 0) {
		printf("\n");
	};

	return 0;
}