#include "InfixToPostfix.h"
#include "LIstBaseStack.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define LEN 100


void InToPost(char *infix){
	
	int in=0;int pre=0;
	int a;
	char postfix[LEN]={0,};
		
	Stack Spostfix;
	StackInit(&Spostfix);

	for(in=0; in < strlen(infix); in++){
		if(isdigit(infix[in])){
			printf("%c" , postfix[pre++] = infix[in]);
		}
		if(infix[in] == '('){
			SPush(&Spostfix, numOfchange(infix[in]));
		}
		if(infix[in] == ')'){
			while( numOfchange != 0){
			printf("%c" , postfix[pre++] = SPop(&Spostfix));				
			}
		}
		else if(numOfchange(infix[in]) == 1 || numOfchange(infix[in]) == 2){
			while(numOfchange(SPeek(&Spostfix)) >= numOfchange(infix[in])){
				printf("%c" , postfix[pre++] = SPop(&Spostfix));
				SPush(&Spostfix, infix[in]);	
			}
		}
	}
}

int numOfchange(char operation){
	
	int num;
	switch(operation){
	case '-':
		return num = 1;

	case '+':
		return num = 1;
		
	case '*':
		return num = 2;
		
	case '/':
		return num = 2;

	case '(':
		return num = 0;
	}
}


//void caluation(char *postfix){}
