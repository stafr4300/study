#include "DLinkedList.h"
#include <stdio.h>
#include <stdlib.h>

void ListInit(List * plist){
	plist->head = NULL;
	plist->cur = NULL;
	plist->tail = NULL;
	plist->numOfData = 0;
}
void LInsert(List * plist, LData data){
   Node *newNode;
   newNode = (Node *)malloc(sizeof(Node));
   newNode->data = data;
   newNode->next = NULL;
   (plist->numOfData)++;
   if(plist->head == NULL){
	  plist->head = newNode;
   } else{
	  plist->tail->next = newNode;
   }
   plist->tail = newNode;
}

int LFirst(List * plist, LData * pdata){
	if(plist->head == NULL) return FALSE;
	
		plist->cur = plist->head;
		*pdata = plist->cur->data;
		return TRUE;
	
}
int LNext(List * plist, LData * pdata){
	
	if(plist->cur->next == NULL) return FALSE;
	else{
		plist->cur = plist->cur->next;
		*pdata = plist->cur->data;
		return TRUE;
	}
}

LData LRemove(List * plist){
	int i;
	int num = plist->numOfData;
	LData data = plist->cur->data;
	for(i=0; i <num; i++){
		
	}
	return data;

}

int LCount(List * plist){
	return plist->numOfData;
}

void SetSortRule(List * plist, int (*comp)(LData d1, LData d2)){}