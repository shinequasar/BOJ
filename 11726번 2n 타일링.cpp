#include <bits/stdc++.h>

using namespace std;
//다이나믹 프로그래밍(동적프로그래밍) 예제. 메모리제이션 이용.
// 재귀호출 시, 반복적으로 계산되는 것들의 계산횟수를 줄이기 위해 이전 계산값을 저장했다 재사용. 
int d[1001];

int dp(int n){
	if(n == 1) return 1;
	if(n == 2) return 2;
	if(d[n] != 0) return d[n];
	return d[n] = (dp(n-1)+dp(n-2))%10007;
}

int main(void){
	int n;
	cin >> n;
	cout << dp(n);
	return 0;
}
