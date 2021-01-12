#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b)) {
		cout << "True" << endl;
	}
	else {
		cout << "False" << endl;
	}
	return 0;
}