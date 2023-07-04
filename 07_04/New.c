#define _CRT_SECURE_NO_WARNINGS 1
#include "Queue.h"

void Test1()
{
	Queue q;
	Queue* pq = &q;
	QueueInit(pq);
	QueuePush(pq, 1);
	QueuePush(pq, 2);
	QueuePush(pq, 3);
	QueuePush(pq, 4);
	QueuePush(pq, 5);
	int size = 0;
	size = QueueSize(pq);
	printf("%d:\n", size);

	while (!QueueEmpty(pq))
	{
		int ret = QueueFront(pq);
		printf("%d ", ret);
		QueuePop(pq);
	}
	printf("\n");
	QueueDestory(pq);
}

int main()
{
	Test1();
	return 0;
}
