#include <iostream>
using namespace std;
int main() 
{
	int A, B;
	cin >> A;
	cin >> B;
	int c = A;
	while (c >= 0) {
		c -= B;
	}
	cout << "Unoccupied segment length - " << c + B;
	return 0;
}