#include <bits/stdc++.h>
//제귀함수의 대표적인 예제. 하노이의 탑. 
using namespace std;

void move( int num, int start, int end){
	// 출발지점과 도착지점 외의 나머지 한 장대.
	// 1+2+3=6 이고 1,2,3중 2개가 지정되어있으면 전체 합에서 뺸 나머지값이 나머지 장대가 된다. 
	int left = 6-start-end; 	
	if(num == 1) {
		cout<<start<<" "<<end<<"\n"; 
		
		return;
	}
	if(num >= 2){
		//n==1이 되어서 마지막 칸을 옮길때까지 재귀함수로 같은 과정 반복. 
	move(num-1, start, left); //맨 및판 제외하고 위에꺼 목표지점 외의 나머지로  옮기기. 
	move(1,start,end); //가장 밑판을 목표지점으로. 
	move(num-1,left,end); // 다시 밑판 위로 하나씩 쌓기. 
	} 	
}

int main(void){
	int num, count=0;
	cin >> num;
	cout << (1<<num) -1<<"\n";  //시프트연산 : A<<B연산은 결국 A*(2의 B제곱)과 같다. 
	move(num,1,3);
	return 0;
}
