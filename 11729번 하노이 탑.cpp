#include <bits/stdc++.h>
//�����Լ��� ��ǥ���� ����. �ϳ����� ž. 
using namespace std;

void move( int num, int start, int end){
	// ��������� �������� ���� ������ �� ���.
	// 1+2+3=6 �̰� 1,2,3�� 2���� �����Ǿ������� ��ü �տ��� �A ���������� ������ ��밡 �ȴ�. 
	int left = 6-start-end; 	
	if(num == 1) {
		cout<<start<<" "<<end<<"\n"; 
		
		return;
	}
	if(num >= 2){
		//n==1�� �Ǿ ������ ĭ�� �ű涧���� ����Լ��� ���� ���� �ݺ�. 
	move(num-1, start, left); //�� ���� �����ϰ� ������ ��ǥ���� ���� ��������  �ű��. 
	move(1,start,end); //���� ������ ��ǥ��������. 
	move(num-1,left,end); // �ٽ� ���� ���� �ϳ��� �ױ�. 
	} 	
}

int main(void){
	int num, count=0;
	cin >> num;
	cout << (1<<num) -1<<"\n";  //����Ʈ���� : A<<B������ �ᱹ A*(2�� B����)�� ����. 
	move(num,1,3);
	return 0;
}
