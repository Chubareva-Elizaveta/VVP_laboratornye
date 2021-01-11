#include <iostream> 
#include<cmath>
using namespace std;
int main()
{
	int x1, y1, x2, y2;
	cin >> x1;
	cin >> y1;
	cin >> x2;
	cin >> y2;
	cout << "The distance between the points is - " << sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)) << endl;
	return 0;
}
