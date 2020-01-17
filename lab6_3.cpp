#include<iostream>
using namespace std;

char before(char x){
	char in;
	if(x=='A'){
		return 'Z';
	}
	else{
		if((int)x>64&&(int)x<91)
		{
			in = x-1;
			return in;
		}
		else
		{
			return '0';
		}
		
	}
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
