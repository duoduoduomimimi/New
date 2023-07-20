#define _CRT_SECURE_NO_WARNINGS 1
#include "Btree.h"
#include "Queue.h"
extern int count;
BTNode* BuyNode(BTDataType x)
{
	BTNode* node = (BTNode*)malloc(sizeof(BTNode));
	assert(node);

	node->data = x;
	node->left = NULL;
	node->right = NULL;

	return node;
}

BTNode* CreatBinaryTree()
{
	BTNode* node1 = BuyNode(1);
	BTNode* node2 = BuyNode(2);
	BTNode* node3 = BuyNode(3);
	BTNode* node4 = BuyNode(4);
	BTNode* node5 = BuyNode(5);
	BTNode* node6 = BuyNode(6);
	BTNode* node7 = BuyNode(7);


	node1->left = node2;
	node1->right = node4;
	node2->left = node3;
	node4->left = node5;
	node4->right = node6;
	node2->right = node7;
	return node1;
}

// 先序遍历
void PreOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("# ");
		return;
	}

	printf("%d ", root->data);
	PreOrder(root->left);
	PreOrder(root->right);
}

// 中序遍历
void InOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("# ");
		return;
	}

	InOrder(root->left);
	printf("%d ", root->data);
	InOrder(root->right);
}

// 后序遍历
void PostOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("# ");
		return;
	}

	PostOrder(root->left);
	PostOrder(root->right);
	printf("%d ", root->data);
}

// 求二叉树中的节点个数
count = 0;
void BinaryTreeSize(BTNode* root)
{
	if (root == NULL)
	{
		return;
	}
	count++;
	BinaryTreeSize(root->left);
	BinaryTreeSize(root->right);
}

// 递归求解
int BinaryTreeSize2(BTNode* root)
{
	return root == NULL ? 0 : BinaryTreeSize2(root->left) + BinaryTreeSize2(root->right) + 1;
}

// 求解二叉树中的叶子节点
int BinaryTreeLeafSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	
	if (root->left == NULL && root->right == NULL)
		return 1;

	return BinaryTreeLeafSize(root->left) + BinaryTreeLeafSize(root->right);
}

// 求第k层的节点个数
int LevelkOrder(BTNode* root, int k)
{
	assert(k >= 1);

	if (root == NULL)
		return 0;

	if (k == 1)
		return 1;

	return LevelkOrder(root->left, k - 1) + LevelkOrder(root->right, k - 1);
}

// 查找值为x的节点
BTNode* BinaryTreeFind(BTNode* root, BTDataType x)
{
	if (root == NULL || root->data == x)
		return root;
	
	BTNode* ret1 = BinaryTreeFind(root->left, x);
	if (ret1)
		return ret1;

	BTNode* ret2 = BinaryTreeFind(root->right, x);
	if (ret2)
		return ret2;

	return NULL;
}

// 求二叉树的深度
int BinaryTreeDepth(BTNode* root)
{
	if (root == NULL)
		return 0;

	int leftDepth = BinaryTreeDepth(root->left);
	int rightDepth = BinaryTreeDepth(root->right);

	return leftDepth > rightDepth ? leftDepth + 1 : rightDepth + 1;
}

// 二叉树销毁
void BinaryTreeDestory(BTNode* root)
{
	if (root == NULL)
		return;
	
	BinaryTreeDestory(root->left);
	BinaryTreeDestory(root->right);
	//printf("%p:%d\n", root, root->data);
	free(root);
}

// 层序遍历
void LevelOrder(BTNode* root)
{
	Queue q;
	QueueInit(&q);
	if (root == NULL)
		return;
	
	QueuePush(&q, root);

	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		printf("%d ", front->data);
		QueuePop(&q);

		if (front->left)
			QueuePush(&q, front->left);

		if (front->right)
			QueuePush(&q, front->right);
	}
	printf("\n");
	QueueDestory(&q);
}

// 判断树是否是完全二叉树
int BinaryTreeComplete(BTNode* root)
{
	Queue q;
	QueueInit(&q);
	if (root)
	{
		QueuePush(&q, root);
	}

	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		QueuePop(&q);
		if (front)
		{
			QueuePush(&q, front->left);
			QueuePush(&q, front->right);
		}
		else
		{
			// 第一次遇见空节点，则跳出循环
			break;
		}
			
	}
	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		QueuePop(&q);
		if (front)
		{
			QueueDestory(&q);
			return false;
		}
	}
	QueueDestory(&q);
	return true;
}