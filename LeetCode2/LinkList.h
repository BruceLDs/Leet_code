#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int DataType;
typedef struct ListNode
{
	DataType data;
	struct ListNode* next;
}ListNode;
typedef struct List
{
	ListNode* head;
}List;
ListNode *ListNodeCreat(DataType x);//创建新节点
void ListInit(List* plist);//初始化链表
void ListPushBack(List* plist, DataType x);//尾删
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2);
void ListPrint(List* plist);//打印链表
void ListTest(List* l1,List* l2);