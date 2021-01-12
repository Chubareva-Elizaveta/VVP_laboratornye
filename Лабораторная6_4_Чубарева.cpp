#include <iostream>
using namespace std;
int main() 
{
	int A, B, C, Pr, Kv, K;
	cin >> A;
	cin >> B;
	cin >> C;
	Pr = A * B;
	Kv = C * C;
	K = Pr / Kv;
	cout << "Number of squares - " << K << endl;
	return 0;
}