#include <bits/stdc++.h>

using namespace std;

string hanoi(int num){
	int temp;
		
	for(int i=num; i>0;i--){ // a��뿡 �Է¹��� num��ŭ ���� �� �� 
		a.push(i);
	}

	if(a.top()<c.top()){ //c ���� �� �� 
		temp = a.top();
		a.pop();
		c.push(temp);
		return "1 3";
	}
	else if(a.top()<b.top()){ // b���� �ű� 
		temp = a.top();
		a.pop();
		b.push(temp);
		return "1 2";
	}
	else if(b.top()<c.top()){ // b���� �ű� 
		temp = a.top();
		a.pop();
		b.push(temp);
		return "2 3";
	}
	else if(c.top()<a.top()){ // a���� �ű� 
		temp = c.top();
		c.pop();
		a.push(temp);
		return "3 1";
	}
	else if(b.top()<a.top()){ // b���� �ű� 
		temp = b.top();
		b.pop();
		a.push(temp);
		return "2 1";
	}
	else break; //�ű� ���� ���� 
}

int main(void){
	stack<int> a, b, c; //��� 
	int result;
	int num;
	cin >> num;
	
	result = hanoi(num);
	if(result == -1) 
	
	//	cout << a.size() <<endl;
	
	
	
	return 0;
}
