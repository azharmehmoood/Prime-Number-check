#include<iostream>
using namespace std;
int main() {
	
	int a;
	cout << "Enter a number to find it is prime or not" << endl;
	cin >> a;
	bool flag=0;
	for (int i = 2; i < a; i++) {
		if (a% i == 0) {
			cout << "not a prime number" << endl;
			flag = 1;
			break;
		}
	}
	if (flag == 0) {
		cout << "Given Number is a prime number" << endl;
	}
	
	
	
	
	return 0;
}