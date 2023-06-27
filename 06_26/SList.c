#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"

// ��ӡ
void SListPrint(SLNode* phead)
{
	SLNode* cur = phead;
	while (cur)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}

// �����½ڵ�
SLNode* CreateSListNode(SLDataType* x)
{
	SLNode* newnode = (SLNode*)malloc(sizeof(SLNode));
	assert(newnode);

	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}

// β��  ��ı��ⲿ��ָ�루ʵ�Σ�������Ҫ����ָ��ĵ�ַ�����ں����иı��ⲿ������ʵ�Σ������ݣ�����Ҫ������ⲿ�����ĵ�ַ
// ��Ϊ�������β�ֻ��ʵ�ε�һ����ʱ��������ʵ��û��ֱ����ϵ��ֻ��ģ��ʵ�ε�Ч�����βεĸı��ʵ��û��ֱ�ӵ�Ӱ��
void SListPushBack(SLNode** pphead, SLDataType x)
{
	assert(pphead);
	// �����������
	SLNode* cur = *pphead;
	SLNode* newnode = CreateSListNode(x);

	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		while (cur->next) // ��β�ڵ�
		{
			cur = cur->next;
		}
		
		cur->next = newnode;
	}
	// ֻ�е��ڵ㲻����Ҫ�ˣ��Ž���free����
	// ���������������ж���ľֲ����������٣���malloc���ڴ�ռ����ɴ�����Ч
}

// ͷ��  ʹ�ö���ָ�룬���ⲿ��phead����ֱ�ӵ���ϵ��ͷ�����֮��pheadҪָ���µ�ͷ�ڵ�
void SListPushFront(SLNode** pphead, SLDataType x)
{
	assert(pphead);
	// �����������
	/*assert(*pphead);*/
	SLNode* cur = *pphead;
	SLNode* newnode = CreateSListNode(x);

	newnode->next = cur;
	*pphead = newnode;
}

// βɾ
void SListPopBack(SLNode** pphead)
{
	assert(pphead);
	// ������Ϊ�գ��Ͳ����ٽ���ɾ����
	assert(*pphead);

	// ֻ��һ���ڵ�
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;  // �ı���pheadָ���ֵ������Ҫ������ָ��
	}
	else  // ����ڵ�
	{
		// ��β�ڵ��ǰһ���ڵ�
		SLNode* prev = *pphead;
		while (prev->next->next)  // ��ֻ��һ���ڵ�ʱ������Խ����ʵ�����
		{
			prev = prev->next;
		}
		SLNode* tail = prev->next;
		free(tail); // �ͷŵ�tailָ��ָ��Ľṹ��ռ�; ��ֻ��һ���ڵ�ʱ����ᷢ���ͷ�NULLָ��ĵĴ���
		prev->next = NULL; // ��β�ڵ��ǰһ���ڵ��nextָ�룬�ÿ�
	}
	
}

// ͷɾ
void SListPopFront(SLNode** pphead)
{
	assert(pphead);
	// ������Ϊ�գ��Ͳ����ٽ���ɾ����
	assert(*pphead);
	SLNode* next = (*pphead)->next;
	free(*pphead);  // ���ṹ��ڵ���ռ�õĿռ䣬�����ͷţ�������
	*pphead = next; 
}

// ����
SLNode* SListFind(SLNode* phead, SLDataType x)
{
	
	// �������޷����в���
	assert(phead);
	SLNode* cur = phead;
	while (cur->next)  //  �߼������⣬������ҵ���β�ڵ㣬��β�ڵ�����ֱ��������û�н��м��
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	if (cur->data == x) // ���һ��������β�ڵ�
		return cur;
	else
		return NULL;
}

// �޸�
void SListModify(SLNode* phead, SLDataType x, SLDataType y)
{
	SLNode* cur = SListFind(phead, x);
	if (cur)
	{
		cur->data = y;
	}
	else
	{
		printf("%d������\n", x);
	}
}

// ��pos�ڵ�֮ǰ����
void SListInsert(SLNode** pphead, SLNode* pos, SLDataType x)
{
	// �Է��������
	assert(pos);
	assert(pphead);
	// ������Ҳ���Դ���
	SLNode* newnode = CreateSListNode(x);
	if (*pphead == NULL)
	{
		newnode->next = *pphead;
		*pphead = newnode;
	}
	else
	{
		// �ҵ�pos�ڵ��ǰһ���ڵ�
		SLNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		newnode->next = pos;
		prev->next = newnode;
	}
}

// ��pos֮����в���
void SListInsertAfter(SLNode* pos, SLDataType x)
{
	// �Է��������
	assert(pos);
	// �������޷����в��ң�����SListFind�ڽ��ж��ԣ���֤��pos����Ч��
	SLNode* newnode = CreateSListNode(x);
	
	newnode->next = pos->next;
	pos->next = newnode;
}

// ɾ��ָ��λ�õĽڵ�
void SListErase(SLNode** pphead, SLNode* pos)
{
	// �Է�����ɾ��
	assert(pos);
	assert(pphead);
	// �������޷�����ɾ��������SListFind�ڽ��ж��ԣ���֤��*phead��pos����Ч��
	// �ҵ�pos��ǰһ���ڵ�
	if ((*pphead)->next == NULL)  // ֻ��һ���ڵ�ʱ
	{
		free(*pphead);
		*pphead = NULL;
	}
	else if (*pphead == pos)  // �ж���ڵ�ʱ��Ҫɾ��ͷ�ڵ�
	{
		*pphead = pos->next;
		free(pos);
	}
	else   // �ж���ڵ�ʱ��ɾ�������ڵ�
	{
		SLNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next = pos->next;
		free(pos);
	}
}

// ��ָ��λ��֮��ɾ��
void SListEraseAfter(SLNode* pos)
{
	// �Է�����ɾ��
	assert(pos);
	// �������޷�����ɾ��������SListFind�ڽ��ж��ԣ�pos����Ч��
	if (pos->next == NULL)  // pos��Ϊβ�ڵ�
	{
		return;
	}
	else
	{
		SLNode* after = pos->next->next;
		free(pos->next);
		pos->next = after;
	}
}