#include <iostream> 
using namespace std;
int main()
{
	float a, b;
	cin >> a;
	cin >> b;
	cout << "The sum of modules a and b is - " << abs(a) + abs(b) << endl;
	cout << "The difference between the modules a and b is - " << abs(a) - abs(b) << endl;
	cout << "The product of modules a and b is - " << abs(a) * abs(b) << endl;
	cout << "The quotient of modules a and b is - " << (abs(a)) / (abs(b)) << endl;
	return 0;
}