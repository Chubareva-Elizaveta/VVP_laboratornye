#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	if ((a + b > c) && (c + a > b) && (b + c > a)) {
		cout << "True" << endl;
	}
	else {
		cout << "False" << endl;
	}
	return 0;
}