#include <iostream> 
using namespace std;
int main()
{
	float X, A, Y;
	cin >> X;
	cin >> A;
	A = A / X;
	cout << "Cost of 1 kg of sweets - " << A << endl;
	cin >> Y;
	A = A * Y;
	cout << "Cost of Y kg of sweets - " << A << endl;
	return 0;
}