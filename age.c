#include <stdio.h>

int main() {
	const int A = 30;
//输入年龄
	int age = 0;
	printf("请输入你的年龄：");
	scanf("%d", &age);

	printf("你的年龄是%d岁。\n", age);
//进入假设
	if (age < A) {
		printf("年轻就是美好");

	} else {
		printf("活到老，学到老。");
	}




	return 0;
}