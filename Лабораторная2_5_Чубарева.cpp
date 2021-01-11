#include <iostream> 
#include<cmath>
using namespace std;
int main()
{
	int x1, y1, x2, y2, x3, y3, a, b, c, p2, P, S;
	cin >> x1;
	cin >> y1;
	cin >> x2;	
	cin >> y2;
	cin >> x3;
	cin >> y3;
	a = sqrt((x2 - x1)* (x2 - x1) + (y2 - y1)* (y2 - y1));
	b = sqrt((x3 - x2)* (x3 - x2) + (y3 - y2)* (y3 - y2));
	c = sqrt((x3 - x1)* (x3 - x1) + (y3 - y1)* (y3 - y1));
	P = a + b + c;
	p2 = P / 2;
	S = sqrt(p2 * abs(p2 - a) * abs(p2 - b) * abs(p2 - c));
	cout << "The perimeter of a triangle is - " << P << endl;
	cout << "The area of the triangle is - " << S << endl;
	return 0;
}