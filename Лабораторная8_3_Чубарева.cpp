#include <iostream>
using namespace std;
int main() 
{
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	if (abs(a - b) < abs(a - c)) {
		cout << "Point - " << b << endl;
		cout << "Distance - " << abs(a - b) << endl;
	}
	else {
		cout << "Point - " << c << endl;
		cout << "Distance - " << abs(a - c) << endl;
	}
	return 0;
}