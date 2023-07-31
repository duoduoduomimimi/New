#define _CRT_SECURE_NO_WARNINGS 1
#include"Sort.h"
#include"Stack.h"

void PrintArray(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

// 插入排序
void InsertSort(int* a, int n)
{
	assert(a);
	int i = 0;
	for (i = 0; i < n - 1; i++) // 共遍历n-2填，最后一个end为序列中倒数第二个数值，倒数第一个数值用来插入
	{
		// 单趟排序
		// 将下标end+1处的值，插入到有序区间[0,end]当中
		int end = i;
		int tmp = a[end + 1]; // 记录下标end+1处的值
		while (end >= 0)
		{
			if (tmp < a[end])
			{
				a[end + 1] = a[end];   // 后移覆盖
				end--;
			}
			else
			{
				break;
			}
		}
		a[end + 1] = tmp;
	}
}

//void InsertSort(int* a, int n)
//{
//  assert(a);
// 
//	int i = 0;
//	for (i = 1; i < n; i++)  // n-1趟插入操作
//	{
//		int j = 0;
//		for (j = i; j > 0; j--)
//		{
//			if (a[j] < a[j - 1]) // 升序： 后者小于前者则交换
//			{
//				int tmp = a[j];
//				a[j] = a[j - 1];
//				a[j - 1] = tmp;
//			}
//			else
//			{
//				break;
//			}
//		}
//	}
//}

// 希尔排序
void ShellSort(int* a, int n)
{
	assert(a);

	// 预排序
	int i = 0;
	int gap = n;

	//int j = 0;
	//for (i = 0; i < gap; i++)
	//{
	//	for (j = i; j < n - gap; j += gap)
	//	{
	//		// 单组预排序
	//		int end = j;
	//		int tmp = a[end + gap]; // 记录下标end+1处的值
	//		while (end >= 0)
	//		{
	//			if (tmp < a[end])
	//			{
	//				a[end + gap] = a[end];   // 后移覆盖
	//				end -= gap;
	//			}
	//			else
	//			{
	//				break;
	//			}
	//		}
	//		a[end + gap] = tmp;
	//	}
	//}

	while (gap > 1)
	{  
		// gap不为1，即为预排序；gap为1，即为直接插入排序，保证最后的结果是有序的
		gap = gap / 3 + 1;
		// 另一种预排序的写法
		for (i = 0; i < n - gap; i++)
		{
			// 单组预排序
			int end = i;
			int tmp = a[end + gap]; // 记录下标end+1处的值
			while (end >= 0)
			{
				if (tmp < a[end])
				{
					a[end + gap] = a[end];   // 后移覆盖
					end -= gap;
				}
				else
				{
					break;
				}
			}
			a[end + gap] = tmp;
		}
	}
}

void Swap(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

// 向下调整算法
void AdjustDown(int* a, int size, int parent)
{
	// 1. 选出左右孩子中较小的一个
	int leftchild = parent * 2 + 1;
	int rightchild = parent * 2 + 2;  // 注意：存在越界问题
	int minchild = 0;
	if (rightchild < size)  //  若右孩子节点存在
		minchild = a[leftchild] > a[rightchild] ? leftchild : rightchild;
	else
		minchild = leftchild;   // 若没有右孩子节点，minchild直接赋值为左孩子节点

	// 2. 小的孩子节点的值与父亲节点的值，进行比较；
	//    若比父亲小则交换，继续向下调整；若比父亲大，则结束

	while (minchild < size)  // 孩子节点已经不存在，无法比较则结束循环
	{
		if (a[minchild] > a[parent])
		{
			Swap(&a[minchild], &a[parent]);
			parent = minchild;
			leftchild = parent * 2 + 1;
			rightchild = parent * 2 + 2;  // 若没有右孩子节点，会产生越界问题吗？
			if (rightchild < size)
				minchild = a[leftchild] > a[rightchild] ? leftchild : rightchild;
			else
				minchild = leftchild;   // 若没有右孩子节点，minchild直接赋值为左孩子节点
		}
		else

		{
			break;
		}
	}
}

void HeapSort(int* a, int sz)
{
	assert(a);

	// 建堆
	// 方式一：从第二个节点处，开始向后进行向上调整 O(N * logN)
	//int i = 0;
	//for (i = 1; i < size; i++)
	//{
	//	AdjustUp(arr, i);
	//}

	// 方式二: 从倒数第一个非叶子节点处，开始向前进行向下调整  O(N)
	int i = 0;
	int parent = (sz - 1 - 1) / 2; // 最后一个节点的父亲节点
	for (i = parent; i >= 0; i--)
	{
		AdjustDown(a, sz, i);
	}
	/*for (i = 0; i < sz; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");*/
	// 升序 - 建大堆
	// 降序 - 建小堆
	int end = sz - 1;
	while (end > 0) // O(N * logN)
	{
		Swap(&a[0], &a[end]);
		AdjustDown(a, end, 0);  // O(logN)
		end--;
	}
}

// 选择排序
void SelectSort(int* a, int n)
{
	assert(a);
	// 遍历选择出最小值与最大值的下标，之后将最小值交换到序列的最左边(升序)，将最大值交换到序列的最右边(升序)
	int begin = 0, end = n - 1;
	while (begin < end)
	{
		int mini = begin, maxi = begin;
		int i = 0;
		for (i = begin + 1; i <= end; i++)
		{
			if (a[i] < a[mini])
				mini = i;

			if (a[i] > a[maxi])
				maxi = i;
		}
		Swap(&a[begin], &a[mini]);
		if (begin == maxi)
		{
			maxi = mini;
		}
		Swap(&a[maxi], &a[end]);
		begin++;
		end--;
	}
}	

// 冒泡排序
void BubbleSort(int* a, int n)
{
	int i = 0;
	for (i = 0; i < n - 1; i++)
	{
		int j = 0;
		int exchange = 0;

		for (j = 1; j < n - 1 - i; j++)
		{
			if (a[j - 1] > a[j])
			{
				Swap(&a[j - 1], &a[j]);
				exchange = 1;
			}
		}
		if (exchange == 0)
			break;
	}
}

int GetMidIndex(int* a, int begin, int end)
{
	int mid = (begin + end) / 2;
	if (a[begin] < a[mid])
	{
		if (a[mid] < a[end])
		{
			return mid;
		}
		else if (a[mid] > a[end] && a[begin] < a[end])
		{
			return end;
		}
		else
		{
			return begin;
		}
	}
	else  // a[begin] >= a[mid]
	{
		if (a[begin] < a[end])
		{
			return begin;
		}
		else if (a[begin] > a[end] && a[end] > a[mid])
		{
			return end;
		}
		else
		{
			return mid;
		}
	}
}

// hoare版
int PartSort1(int* a, int begin, int end)
{
	int left = begin, right = end;
	int keyi = left;
	while (left < right)
	{
		// 右边先走，找小
		while (left < right && a[right] >= a[keyi])
		{
			right--;
		}

		// 左边后走，找大
		while (left < right && a[left] <= a[keyi])
		{
			left++;
		}

		Swap(&a[left], &a[right]);
	}
	Swap(&a[left], &a[keyi]);
	return keyi;
}

// 坑位法
int PartSort2(int* a, int begin, int end)
{
	int key = a[begin];
	int pit = begin;
	int left = begin, right = end;
	while (left < right)
	{
		// 右边先走，找小
		while (left < right && a[right] >= key)
		{
			right--;
		}
		a[pit] = a[right];
		pit = right;

		// 左边后走，找大
		while (left < right && a[left] <= key)
		{
			left++;
		}
		a[pit] = a[left];
		pit = left;
	}
	a[pit] = key;
	return pit;
}

// 前后指针版本
int PartSort3(int* a, int begin, int end)
{
	// 代码极致的简洁
	int prev = begin;
	int cur = begin + 1;
	int keyi = begin;
	// 选出数组第一个元素、中间元素、与最后一个元素中的中间值；以保证key的位置上，既不是最大值也不是最小值
	int mid = GetMidIndex(a, begin, end);
	Swap(&a[keyi], &a[mid]);

	while (cur <= end)  // cur未越界
	{
		// cur位置的值小于key,向前交换
		if (a[cur] < a[keyi] && ++prev != cur)
			Swap(&a[prev], &a[cur]);

		cur++;
	}

	Swap(&a[prev], &a[keyi]);
	keyi = prev;
	return keyi;
}

void QuickSort(int* a, int begin, int end)
{
	// 当区间不存在或只剩一个数值时，结束排序
	if (begin >= end)
		return;

	if (end - begin > 10)
	{
		int keyi = PartSort3(a, begin, end);
		QuickSort(a, begin, keyi - 1);
		QuickSort(a, keyi + 1, end);
	}
	else // 较小区间时，直接使用插入排序，进行排序，停止递归
	{
		InsertSort(a + begin, end - begin + 1);
	}
}

// 使用栈模拟快速排序递归
void QuickSortNonR(int* a, int left, int right)
{
	Stack st;
	StackInit(&st);
	StackPush(&st, right);
	StackPush(&st, left);
	while (!StackEmpty(&st))
	{
		int left = StackTop(&st);
		StackPop(&st);

		int right = StackTop(&st);
		StackPop(&st);

		int keyi = PartSort3(a, left, right);

		if (keyi + 1 < right)
		{
			StackPush(&st, right);
			StackPush(&st, keyi + 1);
		}

		if (left < keyi - 1)
		{
			StackPush(&st, keyi - 1);
			StackPush(&st, left);
		}
	}
	StackDestory(&st);
}

void _MergeSort(int* a, int begin, int end, int* tmp)
{
	if (begin >= end)
		return;

	int mid = (begin + end) / 2;

	// 使区间[begin,mid][mid+1,end]有序
	_MergeSort(a, begin, mid, tmp);
	_MergeSort(a, mid + 1, end, tmp);

	// 归并
	int begin1 = begin, begin2 = mid + 1;
	int end1 = mid, end2 = end;
	int i = begin;
	while (begin1 <= end1 && begin2 <= end2)
	{
		if (a[begin1] <= a[begin2])
		{
			tmp[i++] = a[begin1++];

		}
		else
		{
			tmp[i++] = a[begin2++];
		}
	}
	while (begin1 <= end1)
	{
		tmp[i++] = a[begin1++];
	}
	while (begin2 <= end2)
	{
		tmp[i++] = a[begin2++];
	}

	// 将归并好的数据拷贝至原数组
	memcpy(a + begin, tmp + begin, (end - begin + 1) * sizeof(int));
}


// 归并排序递归实现
void MergeSort(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int) * n);
	if (tmp == NULL)
	{
		perror("MergeSort::malloc");
		exit(-1);
	}

	_MergeSort(a, 0, n - 1, tmp);
	free(tmp);
}


// 归并排序非递归实现
void MergeSortNonR(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int) * n);
	if (tmp == NULL)
	{
		perror("MergeSort::malloc");
		exit(-1);
	}

	int i = 0;
	int gap = 1;
	while (gap < n)
	{
		for (i = 0; i < n; i += 2 * gap)
		{
			// [i,i+gap-1][i+gap,i+2*gap-1]
			int begin1 = i, end1 = i + gap - 1;
			int begin2 = i + gap, end2 = i + 2 * gap - 1;
			int j = begin1;

			// 修正边界
			// end1越界
			if (end1 >= n)
			{
				//将最后的数字，也进行归并
				end1 = n - 1;
				// end1已经越界，所以[begin2,end2]区间不存在，将[begin2,end2]区间舍弃
				begin2 = n;
				end2 = n - 1;
			}

			// begin2越界
			if (begin2 >= n)
			{
				// 将[begin2,end2]区间舍弃
				begin2 = n;
				end2 = n - 1;
			}

			// end2越界
			if (end2 >= n)
			{
				end2 = n - 1;
			}

			while (begin1 <= end1 && begin2 <= end2)
			{
				if (a[begin1] <= a[begin2])
				{
					tmp[j++] = a[begin1++];

				}
				else
				{
					tmp[j++] = a[begin2++];
				}
			}

			while (begin1 <= end1)
			{
				tmp[j++] = a[begin1++];
			}

			while (begin2 <= end2)
			{
				tmp[j++] = a[begin2++];
			}

		}
		memcpy(a, tmp, sizeof(int) * n);
		gap *= 2;
	}
}

// 计数排序
// 适合数据范围集中，重复数据多的场景
// 时间：O(max(range,N))  空间： O(range)

void CountSort(int* a, int n)
{
	// 选择出最小值和最大值
	int min = a[0], max = a[0];
	int i = 0;
	for (i = 1; i < n; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}

		if (a[i] > max)
		{
			max = a[i];
		}
	}

	// 计数的数组
	int range = max - min + 1;
	int* count = (int*)malloc(sizeof(int) * range);
	if (count == NULL)
	{
		perror("CountSort::malloc");
		exit(-1);
	}
	memset(count, 0, range * sizeof(int));

	// 计数
	for (i = 0; i < n; i++)
	{
		count[a[i] - min]++;
	}

	// 回写排序
	int j = 0;
	for (i = 0; i < range; i++)
	{
		while (count[i]--)
		{
			a[j++] = i + min;
		}
	}
}
