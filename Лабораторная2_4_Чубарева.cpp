#include <iostream> 
#include<cmath>
using namespace std;
int main()
{
	int x1, y1, x2, y2, P, S;
	cin >> x1;
	cin >> y1;
	cin >> x2;
	cin >> y2;
	P = 2 * (abs(x1 - x2) + abs(y1 - y2));
	S = abs(x1 - x2) * abs(y1 - y2);
	cout << "Perimeter of rectangle equals - " << P << endl;
	cout << "The area of the rectangle is - " << S << endl;
	return 0;
}
