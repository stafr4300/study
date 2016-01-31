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

			while(numOfchange(SPeek(&Spostfix)) != 0){
				printf("%c" , postfix[pre++] = SPop(&Spostfix));

				if(numOfchange(SPeek(&Spostfix)) == 0 )  SPop(&Spostfix);
				break;
				printf("%c" , postfix[pre++] = SPop(&Spostfix));				
			}

		}
		if(numOfchange(infix[in]) == 1 || numOfchange(infix[in]) == 2){
			while( !SIsEmpty(&Spostfix) && numOfchange(SPeek(&Spostfix)) >= numOfchange(infix[in]) ){
				printf("%c" , postfix[pre++] = SPop(&Spostfix));
			}	
			SPush(&Spostfix, infix[in]);	
		}
		if(in == strlen(infix)-1){
			while(!SIsEmpty(&Spostfix))
				printf("%c" , postfix[pre++] = SPop(&Spostfix));
		}

	}
	printf("\n%c\n" , caluation(postfix)-'0');
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


int caluation(char *postfix){
	int i,num;
	int a,b=0;
	Stack cal;
	StackInit(&cal);

	for(i=0; i< strlen(postfix); i++){
		if(isdigit(postfix[i])){
			SPush(&cal,postfix[i]);	
		}
		if(postfix[i] == '+' || postfix[i] == '-' || postfix[i] == '*' || postfix[i] == '/'){
			switch(postfix[i]){
			case '+':
				{
					num = SPop(&cal) + SPop(&cal);
					SPush(&cal,num);
					break;
				}
			case '-':
				{
					num = SPop(&cal) - SPop(&cal);
					SPush(&cal,num);
					break;
				}
			case '*':
				{
					num = SPop(&cal) * SPop(&cal);
					SPush(&cal,num);
					break;				
				}
			case '/':
				{
					a = SPop(&cal);
					b = SPop(&cal);
					num = b / a;
					SPush(&cal,num);
					break;
				}
			}
		}
	}

	return SPop(&cal);
}
