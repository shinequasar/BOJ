#include <bits/stdc++.h>

using namespace std;

vector<int> a;
int fivo(int x){
	a.push_back(0);
	a.push_back(1);
	if(x==0){
		return 0;
	}
	else{
		for(int i=0; i<x-1; i++){
		a.push_back(a[i]+a[i+1]);
		}
	}
	return a[a.size()-1];
}

int main(void){
	int num, result=0;
	cin>>num;
	result = fivo(num);
	cout<< result;
	return 0;
}
