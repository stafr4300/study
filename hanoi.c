#include <stdio.h>
void Hanoi(int , int , int , int);
int main(){
	
	int n;
	printf("갯수를 입력하시오 : ");
	scanf_s("%d", &n);
	Hanoi(n,1,2,3);
}

void Hanoi(int n, int a, int b, int temp){
	
	// 종료조건
    if (n == 1) 
    {
        printf("%d -> %d\n", a, b);
        return;
    }
 
    // 1~n-1층까지 a->temp로 옮긴다 
    Hanoi(n-1, a, temp, b);
 
    // n번째 층을 a->b로 옮긴다
    Hanoi(1, a, b, temp);
 
    // 1~n-1층까지 temp->b로 옮긴다
    Hanoi(n-1, temp, b, a);


}