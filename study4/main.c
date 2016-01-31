#include "InfixToPostfix.h"
#include "LIstBaseStack.h"
#include <stdio.h>
#define LEN 100

void InToPost(char *infix);
int numOfchange(char operation);
int caluation(char *postfix);

#include "InfixToPostfix.h"
#include "LIstBaseStack.h"
#include <stdio.h>
#define LEN 100

void InToPost(char *infix);
int numOfchange(char operation);


int main(){
	char infix[LEN] = {0,};
	gets(infix);
	InToPost(infix);
	return 0;
}

