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
		printf("%dũ���� ����� A��տ� ���Դϴ�.\n", A[i]);
	}
	printf("������ �Է��Ͻÿ� : ");
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