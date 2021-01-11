#include <iostream>
using namespace std;
int main()
{
	int a, b, S, P;
	cin >> a;
	cin >> b;
	S = a * b;
	P = 2 * (a + b);
	cout << "Area value - " << S << endl;
	cout << "Perimeter value - " << P << endl;
	return 0;
}