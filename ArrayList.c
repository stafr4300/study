#include "ArrayList.h"

void ListInit(L *plist){
	plist->curPosition =0;
	plist->numOFElements =0;
}

void LInsert(L *plist, LData data){
	plist->arr[plist->numOFElements] = data;
	(plist->numOFElements)++;
}

int LFirst(List *plist, LData *data){
	if(plist->numOFElements == 0){ 
		return FALSE;
	}
	plist->curPosition =0;
	*data = plist->arr[plist->curPosition];
	return TRUE;
}

int LNext(L *plist, LData *pdata){
	(plist->curPosition)++;
	if(plist->arr[plist->curPosition] <= plist->arr[plist->numOFElements]) {
		return FALSE;
	}
		*pdata = plist->arr[plist->curPosition];
		return TRUE;
}

LData LRemove(L *plist){
	int i;
	int pos = plist->curPosition;
	int num = plist->numOFElements;
	LData data = plist->arr[pos];  
	for(i=pos; i<num; i++){
		plist->arr[i] = plist->arr[i+1];
	}
	(plist->curPosition)--;
	(plist->numOFElements)--;
	return data;
	
}

int LCount(L *plist){
	return plist->numOFElements;
}