#include <iostream>
using namespace std;
int main()
{
	int A;
	cin >> A;
	if ((A & 2 == 0) && (A >= 10) && (99 >= A)) {
		cout << "True" << endl;
	}
	else {
		cout << "False" << endl;
	}
	return 0;
}