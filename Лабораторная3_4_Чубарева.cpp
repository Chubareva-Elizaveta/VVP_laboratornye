#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
	float x, y;
	cin >> x;
	y = 3 * (pow(x, 6)) - 6 * (pow(x, 2)) - 7;
	cout << "The value of function is " << y << endl;
	return 0;
}