#include <iostream>
using namespace std;
int main()
{
	int A, B, C;
	cin >> A;
	cin >> B;
	cin >> C;
	if (A < B && A < C && B < C) {
		cout << "True" << endl;
	}
	else {
		cout << "False" << endl;
	}
	return 0;
}