#include <stdio.h>

#define TRUE 1
#define FALSE 0
#define LIST_LEN 100

typedef int LData;
typedef struct __List
 {
	LData arr[LIST_LEN];
	int numOFElements;
	int curPosition;

}List;
typedef List L;

void ListInit(L *plist);
void LInsert(L *plist, LData data);
int LFirst(List *plist, LData *data);
int LNext(L *plist, LData *pdata);
LData LRemove(L *plist);
int LCount(L *plist);