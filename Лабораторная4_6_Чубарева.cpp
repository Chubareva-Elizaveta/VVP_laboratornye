#include <iostream> 
using namespace std;
int main()
{
	float a1, a2, b1, b2, c1, c2, x, y;
	cin >> a1;
	cin >> a2;
	cin >> b1;
	cin >> b2;
	cin >> c1;
	cin >> c2;
	x = (c2 - (b2 * c1)) / ((b1 * a2) - a1);
	y = (c1 - (a1 * x)) / b1;
	cout << "Solution equation x and y equal " << x << ", " << y << endl;
	return 0;
}