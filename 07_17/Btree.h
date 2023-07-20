#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


typedef int BTDataType;
int count; // ȫ�ֱ�������������

typedef struct BinaryTreeNode
{
	BTDataType data;
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
}BTNode;

BTNode* CreatBinaryTree(); // Ĭ�϶�����
BTNode* BuyNode(BTDataType x); // ����һ���µ����ڵ�
void PreOrder(BTNode* root); // �������
void InOrder(BTNode* root);  // �������
void PostOrder(BTNode* root); // �������
void LevelOrder(BTNode* root); // �������
int LevelkOrder(BTNode* root, int k); // ���k��Ľڵ����
int BinaryTreeDepth(BTNode* root); // ������������
void BinaryTreeSize(BTNode* root); // ��������еĽڵ����
int BinaryTreeSize2(BTNode* root); // �ݹ����
int BinaryTreeLeafSize(BTNode* root); // ���������е�Ҷ�ӽڵ�
void BinaryTreeDestory(BTNode* root); // ����������
BTNode* BinaryTreeFind(BTNode* root, BTDataType x); // ����ֵΪx�Ľڵ�
int BinaryTreeComplete(BTNode* root); // �ж����Ƿ�����ȫ������