#include <stdio.h>

int main() {
	int year = 0;
	int month = 0;
	int day = 0;
	int week = 0;
	int j = 1;

	printf("��ֱ�����һ���꣬�£��ա�{�����ʽ2022 1 1��\n");
	scanf("%d %d %d,&year��&month,&day");
	printf("���������%d��%d��%d��\n", year, month, day);

	int a[12] = {31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		a[1] = 29;
	} else {
		a[1] = 28;
	}

	week = (year - 1) + ((year - 1) / 4) - ((year - 1) / 100) + ((year - 1) / 400) + day; //�����ѵ�




	printf("%d��%�µ�����\n", year, month, day);
	printf("�� һ �� �� �� �� ��\n ");
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