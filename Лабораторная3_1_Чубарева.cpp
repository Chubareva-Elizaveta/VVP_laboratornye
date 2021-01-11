#include <iostream> 
using namespace std;
int main()
{
	int A, B, rep;
	cin >> A;
	cout << "Present value of A - " << A << endl;
	cin >> B;
	cout << "Present value of B - " << B << endl;
	rep = A;
	A = B;
	B = rep;
	cout << "Now the value of A - " << A << endl;
	cout << "Now the value of B - " << B << endl;
	return 0;
}