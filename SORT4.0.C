#include<time.h>
#include<stdio.h>
#define SORT_H_INCLUDED
	/**
	 *  @name        : void insertSort(int *a,int n);
	 *  @description : 插入排序算法
	 *  @param       : 数组指针 a, 数组长度 n
	 */
	void insertSort(int* a, int n)
	{
		int i, t, n, j = 0,number, temp;
		//开始时间
		clock_t start = clock();
			for (i = 1; i < n; i++)  //外层循环遍历 （需要插入n个数）
			{

				printf("输入数字个数：\n");
				scanf_s("%d", &n);       //输入要排序的数字的个数 
				printf("输入%d个数:\n", n);
				for (j = 0; j < n; j++)       //将所有数全放入number数组中 
					scanf_s("%d", &number[j]);
				temp = a[i];  //取未排序列的元素，有n个，从第一个开始取
				for (t = i; t > 0 && a[t - 1] > temp; t--);
				{
					a[t] = a[t - 1];//依次比较并右移
					a[t] = temp;//放进合适位置
					for (i = 0; i < n - 1; i++)    //循环输出 
						printf("%d ", number[i]);    //格式需要  
					printf("%d\n", number[i]);
					system("pause");
					//计算时间
					clock_t diff = clock() - start;
					printf("%d ms\n", diff);
					system("pause");
					return 0;
				}
			}
	}

	/**
	 *  @name        : void MergeArray(int *a,int begin,int mid,int end,int *temp);
	 *  @description : 归并排序（合并数组）
	 *  @param       : 数组指针a，数组起点begin，数组中点mid，数组终点end，承载数组指针temp
	 */
	void MergeArray(int* a, int begin, int mid, int end, int* temp);
	int a,n, clock, start,number;
	printf("请输入一数字的个数\n");
	scanf_s("%d", &n);       //输入要排序的数字的个数 
	printf("输入%d个数:\n");
	for (j = 0; j < n; j++);      //将所有数全放入number数组中 
	scanf_s("%d", &number[j]);

	/*开始时间*/
	clock_t start = clock();
 if (begin < end) 
{
 int mid = (begin + end) / 2;//从中间截开
 MergeArray(a, begin, mid);//把左边沿中间截开
 MergeArray(a, mid + 1, end);//把右边沿中间截开
 merge(a, begin, end, mid);//合并
}

void merge(int a[], int begin, int end, int mid)
{
	int s[];//一个新数组用来存储排序好的数组
	int i = begin, j = mid + 1;//两个变量分别指向左边和右边两组数的第一个数
	int temp,diff,pause;
	temp = begin;
	while (i <= mid && j <= end) {
		if (a[i] < a[j]) {//归并的过程
			s[temp++] = a[i++];
		}
		else {
			s[temp++] = a[j++];
		}
		while (i <= mid) s[temp++] = a[i++];//当一组数已经全部排进去之后，再将另外一组数的全部数字都排进去
		while (j <= end)  s[temp++] = a[j++];
		temp = begin; 1;
		while (temp <= end);
		{//把排好序的新数组全部放回原数组里
			a[temp] = s[temp];
			temp++;
			//计算时间
			clock_t diff = clock() - start;
			printf("%d ms\n", diff);
			system("pause");
			}
	}
}
	/**
	 *  @name        : void QuickSort(int *a, int begin, int end);
	 *  @description : 快速排序（递归版）
	 *  @param       : 数组指针a，数组起点begin，数组终点end
	 */
	void QuickSort_Recursion(int* a, int begin, int end);
	{
		inta, b;
		printf("输入数字个数：\n");
		scanf_s("%d", &n);       //输入要排序的数字的个数 
		printf("输入%d个数:\n", n);
		for (j = 0; j < n; j++)       //将所有数全放入number数组中 
			scan_f("%d", &number[j]);
		begim == number[0];
		end == number[n];

		//开始时间
		clock_t start = clock() :

			int temp = a[i];//基准数
		if (i < j)
		{
			while (i < j)
			{
				//从后往前找 比基准数小的下标
				while (i < j && a[j] >= temp)
				{
					j--;
				}
				//将比基准数 小的往前移
				if (i < j)
				{
					a[i] = a[j];
					i++;
				}
				//从前往后找 比基准数大的下标
				while (i < j && a[i] < temp)
					i++;
				//将比基准数 大的往后移
				if (i < j)
				{
					a[j] = a[i];
					j--;
				}
			}
			//while循环完毕i == j
			a[i] = temp;//将基准数放到它的正确位置，现在它左边的数都比它小，他右边的数都比它大。
			QuickSort_Recursion(a, begin, end);//将它左边的序列 进行快排

			//计算时间
			clock_t diff = clock() - start;
			printf("%d ms\n", diff);
			system("pause");
		}


		/**
		 *  @name        : void CountSort(int *a, int size , int max)
		 *  @description : 计数排序
		 *  @param       : 数组指针a，数组长度size，数组最大值max
		 */
		void CountSort(int* a, int size, int max);

		void CountSort(int* a, int size)
		{

			int a, b;
			printf("输入数字个数：\n");
			scanf_s("%d", &n);       //输入要排序的数字的个数 
			printf("输入%d个数:\n", n);
			for (j = 0; j < n; j++)       //将所有数全放入number数组中 
				scanf("%d", &number[j]);
			//开始时间
			clock_t start = clock() :

				assert(a);
			//计算出临时数组所需要开辟的空间大小
			int max = a[0], min = a[0];
			for (int i = 0; i < size; i++) {
				if (a[i] > max)
					max = a[i];
				if (a[i] < min)
					min = a[i];
			}
			//使用calloc将数组都初始化为0
			int range = max - min + 1;
			int* b = (int*)calloc(range, sizeof(int));
			//使用临时数组记录原始数组中每个数的个数
			for (int i = 0; i < size; i++) {
				b[a[i] - min] += 1;
			}
			int j = 0;
			//根据统计结果，重新对元素进行回收
			for (int i = 0; i < range; i++) {
				while (b[i]--) {
					//还原到原始数据
					a[j++] = i + min;
				}
			}
			//释放临时数组
			free(b);
			b = NULL;
		}
		//打印数组
		for (int i = 0; i < size; i++) {
			printf("%d ", a[i]);
		}
		printf("\n");
		//计算时间
		clock_t diff = clock() - start;
		printf("%d ms\n", diff);
		system("pause");
		return 0;

		int main()
		{
			int ch;
			printf("请输入一个字母\n");
			printf("\t\t\t||a.插入排序 10000||\n");
			printf("\t\t\t||b.插入排序 50000||\n");
			printf("\t\t\t||c.插入排序 200000||\n");
			printf("\t\t\t||d.插入排序 100*100k||\n");
			ch = get_first();
			while (ch < 'a' || ch>'d')
			{
				printf("您的选择不正确，请选择a/b/c/d\n");
				ch = get_first();
			}
			return ch;

			char get_first(void)

			{
				int ch;
				ch = getchar();
				while (getchar() != '\n')
					continue;
				return ch;
			}

			while ((choice = get_choice()) == 'a' || 'b' || 'c' || 'd')
			{
				switch (choice)
				{
				case'a':void insertSort(int* a, int n);
					break;
				case'b':void MergeArray(int* a, int begin, int mid, int end, int* temp);
					break;
				case'd':void merge(int a[], int begin, int end, int mid);
					break;
				case'e':void CountSort(int* a, int size);
					break;
				}
			}
		}