#include <iostream>

using namespace std;

void print(int a,int b){
	if(a>b) cout <<">";
	if(a<b) cout <<"<";
	if(a==b) cout <<"==";
}

int main(void){
	int A, B;
	cin >>A>>B;
	print(A,B);
	return 0;
}
