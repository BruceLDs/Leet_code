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
ListNode *ListNodeCreat(DataType x);//�����½ڵ�
void ListInit(List* plist);//��ʼ������
void ListPushBack(List* plist, DataType x);//βɾ
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2);
void ListPrint(List* plist);//��ӡ����
void ListTest(List* l1,List* l2);