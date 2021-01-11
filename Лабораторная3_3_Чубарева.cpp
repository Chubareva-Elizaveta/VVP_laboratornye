#include <iostream> 
using namespace std;
int main()
{
	int A, B, C, rep1, rep2, rep3;
	cin >> A;
	cout << "Present value of A - " << A << endl;
	cin >> B;
	cout << "Present value of B - " << B << endl;
	cin >> C;
	cout << "Present value of C - " << C << endl;
	rep1 = A;
	rep2 = C;
	rep3 = B;
	C = rep1;
	A = rep3;
	B = rep2;
	cout << "Now the value of A - " << A << endl;
	cout << "Now the value of B - " << B << endl;
	cout << "Now the value of C - " << C << endl;
	return 0;
}