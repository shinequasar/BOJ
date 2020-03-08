#include <bits/stdc++.h>

using namespace std;

int d[1001];

int dp(int num){
	if(num == 1) return 1;
	if(num == 2) return 3;
	if(d[num]!=0) return d[num];
	return d[num]=(dp(num-1)+2*dp(num-2))%10007;
}

int main(void){
	int num;
	cin >> num;
	cout << dp(num);
	return 0;
} 
