#include <stdio.h>
void Hanoi(int , int , int , int);
int main(){
	
	int n;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &n);
	Hanoi(n,1,2,3);
}

void Hanoi(int n, int a, int b, int temp){
	
	// ��������
    if (n == 1) 
    {
        printf("%d -> %d\n", a, b);
        return;
    }
 
    // 1~n-1������ a->temp�� �ű�� 
    Hanoi(n-1, a, temp, b);
 
    // n��° ���� a->b�� �ű��
    Hanoi(1, a, b, temp);
 
    // 1~n-1������ temp->b�� �ű��
    Hanoi(n-1, temp, b, a);


}