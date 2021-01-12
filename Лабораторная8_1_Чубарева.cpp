#include <iostream>
using namespace std;
int main() 
{
	int a, b;
	cin >> a;
	cin >> b;
	if (a != b) {
		if (a > b) {
			cout << "Variable value - " << a << endl;
		}
		else {
			cout << "Variable value - " << b << endl;
		}
	}
	else {
		a = 0;
		b = 0;
		cout << "Variable value -  " << a << endl;
	}
	return 0;
}