#include <bits/stdc++.h>

using namespace std;
//���̳��� ���α׷���(�������α׷���) ����. �޸����̼� �̿�.
// ���ȣ�� ��, �ݺ������� ���Ǵ� �͵��� ���Ƚ���� ���̱� ���� ���� ��갪�� �����ߴ� ����. 
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
