#include <bits/stdc++.h>

using namespace std;

string hanoi(int num){
	int temp;
		
	for(int i=num; i>0;i--){ // a장대에 입력받은 num만큼 원판 넣 기 
		a.push(i);
	}

	if(a.top()<c.top()){ //c 장대로 옮 김 
		temp = a.top();
		a.pop();
		c.push(temp);
		return "1 3";
	}
	else if(a.top()<b.top()){ // b장대로 옮김 
		temp = a.top();
		a.pop();
		b.push(temp);
		return "1 2";
	}
	else if(b.top()<c.top()){ // b장대로 옮김 
		temp = a.top();
		a.pop();
		b.push(temp);
		return "2 3";
	}
	else if(c.top()<a.top()){ // a장대로 옮김 
		temp = c.top();
		c.pop();
		a.push(temp);
		return "3 1";
	}
	else if(b.top()<a.top()){ // b장대로 옮김 
		temp = b.top();
		b.pop();
		a.push(temp);
		return "2 1";
	}
	else break; //옮길 곳이 없음 
}

int main(void){
	stack<int> a, b, c; //장대 
	int result;
	int num;
	cin >> num;
	
	result = hanoi(num);
	if(result == -1) 
	
	//	cout << a.size() <<endl;
	
	
	
	return 0;
}
