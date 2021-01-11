#include <iostream> 
using namespace std;
int main()
{
	float a, b;
	cin >> a;
	cin >> b;
	cout << "The sum of the squares of a and b is - " << a * a + b * b << endl;
	cout << "The difference between squares of a and b is - " << a * a - b * b << endl;
	cout << "The product of squares of a and b is - " << (a * a) * (b * b) << endl;
	cout << "The quotient of squares of a and b is - " << (a * a) / (b * b) << endl;
	return 0;
}