#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


typedef int BTDataType;
int count; // 全局变量，用来计数

typedef struct BinaryTreeNode
{
	BTDataType data;
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
}BTNode;

BTNode* CreatBinaryTree(); // 默认二叉树
BTNode* BuyNode(BTDataType x); // 创建一个新的树节点
void PreOrder(BTNode* root); // 先序遍历
void InOrder(BTNode* root);  // 中序遍历
void PostOrder(BTNode* root); // 后序遍历
void LevelOrder(BTNode* root); // 层序遍历
int LevelkOrder(BTNode* root, int k); // 求第k层的节点个数
int BinaryTreeDepth(BTNode* root); // 求二叉树的深度
void BinaryTreeSize(BTNode* root); // 求二叉树中的节点个数
int BinaryTreeSize2(BTNode* root); // 递归求解
int BinaryTreeLeafSize(BTNode* root); // 求解二叉树中的叶子节点
void BinaryTreeDestory(BTNode* root); // 二叉树销毁
BTNode* BinaryTreeFind(BTNode* root, BTDataType x); // 查找值为x的节点
int BinaryTreeComplete(BTNode* root); // 判断树是否是完全二叉树