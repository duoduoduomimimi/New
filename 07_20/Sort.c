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

// ��������
void InsertSort(int* a, int n)
{
	assert(a);
	int i = 0;
	for (i = 0; i < n - 1; i++) // ������n-2����һ��endΪ�����е����ڶ�����ֵ��������һ����ֵ��������
	{
		// ��������
		// ���±�end+1����ֵ�����뵽��������[0,end]����
		int end = i;
		int tmp = a[end + 1]; // ��¼�±�end+1����ֵ
		while (end >= 0)
		{
			if (tmp < a[end])
			{
				a[end + 1] = a[end];   // ���Ƹ���
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
//	for (i = 1; i < n; i++)  // n-1�˲������
//	{
//		int j = 0;
//		for (j = i; j > 0; j--)
//		{
//			if (a[j] < a[j - 1]) // ���� ����С��ǰ���򽻻�
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

// ϣ������
void ShellSort(int* a, int n)
{
	assert(a);

	// Ԥ����
	int i = 0;
	int gap = n;

	//int j = 0;
	//for (i = 0; i < gap; i++)
	//{
	//	for (j = i; j < n - gap; j += gap)
	//	{
	//		// ����Ԥ����
	//		int end = j;
	//		int tmp = a[end + gap]; // ��¼�±�end+1����ֵ
	//		while (end >= 0)
	//		{
	//			if (tmp < a[end])
	//			{
	//				a[end + gap] = a[end];   // ���Ƹ���
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
		// gap��Ϊ1����ΪԤ����gapΪ1����Ϊֱ�Ӳ������򣬱�֤���Ľ���������
		gap = gap / 3 + 1;
		// ��һ��Ԥ�����д��
		for (i = 0; i < n - gap; i++)
		{
			// ����Ԥ����
			int end = i;
			int tmp = a[end + gap]; // ��¼�±�end+1����ֵ
			while (end >= 0)
			{
				if (tmp < a[end])
				{
					a[end + gap] = a[end];   // ���Ƹ���
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

// ���µ����㷨
void AdjustDown(int* a, int size, int parent)
{
	// 1. ѡ�����Һ����н�С��һ��
	int leftchild = parent * 2 + 1;
	int rightchild = parent * 2 + 2;  // ע�⣺����Խ������
	int minchild = 0;
	if (rightchild < size)  //  ���Һ��ӽڵ����
		minchild = a[leftchild] > a[rightchild] ? leftchild : rightchild;
	else
		minchild = leftchild;   // ��û���Һ��ӽڵ㣬minchildֱ�Ӹ�ֵΪ���ӽڵ�

	// 2. С�ĺ��ӽڵ��ֵ�븸�׽ڵ��ֵ�����бȽϣ�
	//    ���ȸ���С�򽻻����������µ��������ȸ��״������

	while (minchild < size)  // ���ӽڵ��Ѿ������ڣ��޷��Ƚ������ѭ��
	{
		if (a[minchild] > a[parent])
		{
			Swap(&a[minchild], &a[parent]);
			parent = minchild;
			leftchild = parent * 2 + 1;
			rightchild = parent * 2 + 2;  // ��û���Һ��ӽڵ㣬�����Խ��������
			if (rightchild < size)
				minchild = a[leftchild] > a[rightchild] ? leftchild : rightchild;
			else
				minchild = leftchild;   // ��û���Һ��ӽڵ㣬minchildֱ�Ӹ�ֵΪ���ӽڵ�
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

	// ����
	// ��ʽһ���ӵڶ����ڵ㴦����ʼ���������ϵ��� O(N * logN)
	//int i = 0;
	//for (i = 1; i < size; i++)
	//{
	//	AdjustUp(arr, i);
	//}

	// ��ʽ��: �ӵ�����һ����Ҷ�ӽڵ㴦����ʼ��ǰ�������µ���  O(N)
	int i = 0;
	int parent = (sz - 1 - 1) / 2; // ���һ���ڵ�ĸ��׽ڵ�
	for (i = parent; i >= 0; i--)
	{
		AdjustDown(a, sz, i);
	}
	/*for (i = 0; i < sz; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");*/
	// ���� - �����
	// ���� - ��С��
	int end = sz - 1;
	while (end > 0) // O(N * logN)
	{
		Swap(&a[0], &a[end]);
		AdjustDown(a, end, 0);  // O(logN)
		end--;
	}
}

// ѡ������
void SelectSort(int* a, int n)
{
	assert(a);
	// ����ѡ�����Сֵ�����ֵ���±֮꣬����Сֵ���������е������(����)�������ֵ���������е����ұ�(����)
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

// ð������
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

// hoare��
int PartSort1(int* a, int begin, int end)
{
	int left = begin, right = end;
	int keyi = left;
	while (left < right)
	{
		// �ұ����ߣ���С
		while (left < right && a[right] >= a[keyi])
		{
			right--;
		}

		// ��ߺ��ߣ��Ҵ�
		while (left < right && a[left] <= a[keyi])
		{
			left++;
		}

		Swap(&a[left], &a[right]);
	}
	Swap(&a[left], &a[keyi]);
	return keyi;
}

// ��λ��
int PartSort2(int* a, int begin, int end)
{
	int key = a[begin];
	int pit = begin;
	int left = begin, right = end;
	while (left < right)
	{
		// �ұ����ߣ���С
		while (left < right && a[right] >= key)
		{
			right--;
		}
		a[pit] = a[right];
		pit = right;

		// ��ߺ��ߣ��Ҵ�
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

// ǰ��ָ��汾
int PartSort3(int* a, int begin, int end)
{
	// ���뼫�µļ��
	int prev = begin;
	int cur = begin + 1;
	int keyi = begin;
	// ѡ�������һ��Ԫ�ء��м�Ԫ�ء������һ��Ԫ���е��м�ֵ���Ա�֤key��λ���ϣ��Ȳ������ֵҲ������Сֵ
	int mid = GetMidIndex(a, begin, end);
	Swap(&a[keyi], &a[mid]);

	while (cur <= end)  // curδԽ��
	{
		// curλ�õ�ֵС��key,��ǰ����
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
	// �����䲻���ڻ�ֻʣһ����ֵʱ����������
	if (begin >= end)
		return;

	if (end - begin > 10)
	{
		int keyi = PartSort3(a, begin, end);
		QuickSort(a, begin, keyi - 1);
		QuickSort(a, keyi + 1, end);
	}
	else // ��С����ʱ��ֱ��ʹ�ò������򣬽�������ֹͣ�ݹ�
	{
		InsertSort(a + begin, end - begin + 1);
	}
}

// ʹ��ջģ���������ݹ�
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

	// ʹ����[begin,mid][mid+1,end]����
	_MergeSort(a, begin, mid, tmp);
	_MergeSort(a, mid + 1, end, tmp);

	// �鲢
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

	// ���鲢�õ����ݿ�����ԭ����
	memcpy(a + begin, tmp + begin, (end - begin + 1) * sizeof(int));
}


// �鲢����ݹ�ʵ��
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


// �鲢����ǵݹ�ʵ��
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

			// �����߽�
			// end1Խ��
			if (end1 >= n)
			{
				//���������֣�Ҳ���й鲢
				end1 = n - 1;
				// end1�Ѿ�Խ�磬����[begin2,end2]���䲻���ڣ���[begin2,end2]��������
				begin2 = n;
				end2 = n - 1;
			}

			// begin2Խ��
			if (begin2 >= n)
			{
				// ��[begin2,end2]��������
				begin2 = n;
				end2 = n - 1;
			}

			// end2Խ��
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

// ��������
// �ʺ����ݷ�Χ���У��ظ����ݶ�ĳ���
// ʱ�䣺O(max(range,N))  �ռ䣺 O(range)

void CountSort(int* a, int n)
{
	// ѡ�����Сֵ�����ֵ
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

	// ����������
	int range = max - min + 1;
	int* count = (int*)malloc(sizeof(int) * range);
	if (count == NULL)
	{
		perror("CountSort::malloc");
		exit(-1);
	}
	memset(count, 0, range * sizeof(int));

	// ����
	for (i = 0; i < n; i++)
	{
		count[a[i] - min]++;
	}

	// ��д����
	int j = 0;
	for (i = 0; i < range; i++)
	{
		while (count[i]--)
		{
			a[j++] = i + min;
		}
	}
}
