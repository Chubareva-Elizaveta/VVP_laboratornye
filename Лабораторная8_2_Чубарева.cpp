#include <iostream>
using namespace std;
int main() 
{
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	if (b <= c && b <= a) {
		cout << a + c << endl;
	}
	else {
		if (a <= c && a <= b) {
			cout << b + c << endl;
		}
		else {
			cout << b + a << endl;
		}
	}
	return 0;
}