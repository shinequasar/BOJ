#include <bits/stdc++.h>

using namespace std;

int main(void){
	int burger1, burger2, burger3, beverage1, beverage2;
	vector<int> burgerSet, beverateSet;
	
	cin>>burger1;
	cin>>burger2;
	cin>>burger3;
	cin>>beverage1;
	cin>>beverage2;
	

	burgerSet.push_back(burger1);
	burgerSet.push_back(burger2);
	burgerSet.push_back(burger3);
	
	beverateSet.push_back(beverage1);
	beverateSet.push_back(beverage2);
	
	sort(burgerSet.begin(),burgerSet.end());
	sort(beverateSet.begin(),beverateSet.end());
	
	cout<<burgerSet[0]+beverateSet[0]-50;
	return 0;
}
