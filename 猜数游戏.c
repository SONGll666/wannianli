#include <stdio.h>

int main() {
	rand (time (0));
	int number = rand() % 100 + 1;
	int count = 0;
	int guess = 0;
	printf("������һ����1-100��������²¿��ɡ����㼸���ܲ³���");
	do {

		scanf("%d", &guess);
		count++;
		if (guess > number) {
			printf("�������������");
		} else if (guess < number) {
			printf("���������С��");
		}

	} while (guess != number);

	printf("��ϲ�����%d�κ󣬲¶��ˡ�\n", count);


	return 0;
}