#include <bits/stdc++.h>

using namespace std;

int main(void){
	int n, m; //ī�尳��, ��ǥ��
	vector<int> numbers;
	int num; //���� n���� ���ڵ� 
	int max=0;
	cin>>n>> m;
	
	for(int i=0;i<n;i++){
		cin>>num;
		numbers.push_back(num);
	} 
	
	for(int i=0; i<n;i++){
		for(int j=i+1; j<n;j++){
			for(int k=j+1; k<n;k++){
				int sum = numbers[i]+numbers[j]+numbers[k];
				cout<<"("<<numbers[i]<<", "<<numbers[j]<<", "<<numbers[k]<<")"<<endl;
				cout<<i<<" "<<j<<" "<<k<<endl;
				cout<<sum<<endl;
				if(sum <= m && max<sum){
					max = sum;
				}
			}
		}
	}
	 cout<<max;
	return 0;
}
