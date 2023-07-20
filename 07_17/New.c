#define _CRT_SECURE_NO_WARNINGS 1
#include "Btree.h"
extern int count;
void Test1()
{
	BTNode* root = CreatBinaryTree();

	// �������
	PreOrder(root);
	printf("\n");

	// �������
	InOrder(root);
	printf("\n");

	// �������
	PostOrder(root);
	printf("\n");
}

void Test2()
{
	BTNode* root = CreatBinaryTree();
	BinaryTreeSize(root);
	printf("TreeSize:> %d\n", count);

	int LeafSize = BinaryTreeLeafSize(root);
	printf("LeafSize:> %d\n", LeafSize);

	int TreeDepth = BinaryTreeDepth(root);
	printf("TreeDepth:> %d\n", TreeDepth);

}

void Test3()
{
	BTNode* root = CreatBinaryTree();
	BinaryTreeDestory(root);
	root = NULL;
}

void Test4()
{
	BTNode* root = CreatBinaryTree();
	LevelOrder(root);
	printf("BinaryTreeComplete:> %d\n", BinaryTreeComplete(root));
	BinaryTreeDestory(root);
}

int main()
{
	//Test1();
	//Test2();
	//Test3();
	Test4();
	return 0;
}