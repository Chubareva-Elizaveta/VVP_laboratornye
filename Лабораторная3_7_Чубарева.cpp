#include <iostream> 
using namespace std;
int main()
{
	float A, A2, A3, A5, A10, A15;
	cin >> A;
	A2 = A * A;
	A3 = A2 * A;
	A5 = A3 * A2;
	A10 = A5 * A5;
	A15 = A10 * A5;
	cout << "The 15th power of A is - " << A15 << endl;
	return 0;
}