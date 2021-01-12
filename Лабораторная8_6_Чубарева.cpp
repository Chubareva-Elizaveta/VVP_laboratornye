#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a;
	cin >> a;
	if (a % 2 == 0) {
		cout << "Even ";
	}
	else {
		cout << "Odd ";
	}
	if (a / 100 > 0 && a / 100 < 10) {
		cout << "three-digit ";
	}
	else if (a / 10 > 0 && a / 10 < 10)  {
		 cout << "two-digit ";
	}
	else if (a / 10 == 0) {
		cout << "single ";
	}
	cout << "number.";
	return 0;
}