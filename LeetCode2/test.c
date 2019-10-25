#define  _CRT_SECURE_NO_WARNINGS
#include"LinkList.h"
#include<stdio.h>
int main(){
	List l1;
	ListInit(&l1);
	ListPushBack(&l1, 5);
	//ListPushBack(&l1, 9);
	//ListPushBack(&l1, 3);
	ListPrint(&l1);
	List l2;
	ListInit(&l2);
	ListPushBack(&l2, 5);
	//ListPushBack(&l2, 9);
	//ListPushBack(&l2, 4);
	ListPrint(&l2);
	ListTest(&l1,&l2);
	return 0;
}