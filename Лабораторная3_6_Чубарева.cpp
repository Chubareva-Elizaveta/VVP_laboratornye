#include <iostream> 
using namespace std;
int main()
{
	float A, A2, A4, A8;
	cin >> A;
	A2 = A * A;
	A4 = A2 * A2;
	A8 = A4 * A4;
	cout << "The 8th power of A is - " << A8 << endl;
	return 0;
}