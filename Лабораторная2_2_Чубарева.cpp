#include <iostream> 
using namespace std;
int main()
{
	float A, B, C;
	cin >> A;
	cin >> B;
	cin >> C;
	float AC = C - A;
	float BC = C - B;
	cout << "The sum of the lengths of the segments is - " << AC + BC << endl;
	return 0;
}