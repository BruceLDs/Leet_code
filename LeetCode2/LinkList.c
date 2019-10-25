#define  _CRT_SECURE_NO_WARNINGS

#include"LinkList.h"
ListNode *ListNodeCreat(DataType x){
	ListNode* NewNode = (ListNode *)malloc(sizeof(ListNode));
	NewNode->data = x;
	NewNode->next = NULL;
	return NewNode;
}
void ListInit(List* plist)
{
	plist->head = ListNodeCreat(0);
	plist->head->next = NULL;
}
void ListPushBack(List* plist, DataType x){
	ListNode* NewNode = ListNodeCreat(x);
	ListNode* cur = plist->head;
	while (cur->next !=NULL){
		cur = cur->next;
	}
	cur->next = NewNode;
	NewNode->next = NULL;
}
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
	if (l1 && !l2)
		return l1;
	if (!l1 && l2)
		return l2;
	struct ListNode* cur1 =l1;
	struct ListNode* cur2 = l2;
	struct ListNode* next;//创建新链表尾节点
	struct ListNode* head;//创建新链表头节点
	int count1 = 0, count2 = 0;//记录长度
	while (cur1){
		count1++;
		cur1 = cur1->next;
	}
	while (cur2){
		count2++;
		cur2 = cur2->next;
	}
	if (count1 >= count2){
		cur1 = l1;
		cur2 = l2;
		next = l2;
	}
	else{
		cur1 = l2;
		cur2 = l1;
		next = l1;
	}
	head = cur1;//长链表为新链表
	while (cur2 && cur2->next)
	{
		int tmp = cur1->data + cur2->data;//和
		if (tmp >= 10){
			cur1->data = tmp % 10;
			cur1->next->data++;
		}
		else{
			cur1->data = tmp;
		}
		cur1 = cur1->next;
		cur2 = cur2->next;
	}
	cur1->data = (cur1->data + cur2->data);
	next->next = NULL;
	next->data = 0;
	while (cur1){
		if (cur1->data >= 10 && cur1->next){
			cur1->data = cur1->data % 10;
			cur1->next->data++;
		}
		if (cur1->data >= 10 && !cur1->next){
			cur1->data = cur1->data % 10;
			next->data++;
			cur1->next = next;
		}
		cur1 = cur1->next;
	}
	return head;
}
void ListPrint(List* plist)
{
	ListNode* cur = plist->head->next;
	assert(plist);
	while (cur){
		printf("%d -> ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}
void ListTest(List* l1, List* l2){
	ListNode*cur = addTwoNumbers(l1->head->next, l2->head->next);
	while (cur){
		printf("%d -> ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}