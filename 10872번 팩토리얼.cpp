#include <iostream>
using namespace std;

int fac(int x){
	if(x>2){
	x *= fac(x-1);
	}
	return x;
}
int main(void){
	int N,answer =1;
	scanf("%d",&N);
	if(N!=0)
	answer = fac(N);
	printf("%d",answer);
	return 0;
}
