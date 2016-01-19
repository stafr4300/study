#include <stdio.h>
void hanoi();
int main(){
	int arr[10]={0,};
	int A[10] = {0,};
	int i;
	int n;
	for(i=0; i< n; i++){
		arr[i] = n-i;
		A[i] = arr[i];
		printf("%d크기의 쟁반이 A기둥에 놓입니다.\n", A[i]);
	}
	printf("갯수를 입력하시오 : ");
	scanf_s("%d", &n);
	hanoi(n);
}

void hanoi(int n){
	
	if( n % 2 != 0){
		 //C
	}
	if( n % 2 == 0){
		for()
	 //B
	}

}