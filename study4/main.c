#include "InfixToPostfix.h"
#include "LIstBaseStack.h"
#include <stdio.h>
#define LEN 100

void InToPost(char *infix);
int numOfchange(char operation);

int main(){
	char infix[LEN] = {0,};
	int i;

	for(i=0; i< 5; i++){
		scanf_s("%s", &infix[i]);
	}
	InToPost(infix);

	return 0;
}