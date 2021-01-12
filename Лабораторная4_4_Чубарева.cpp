#include <iostream> 
using namespace std;
int main()
{
	float v1, v2, s, t, sr;
	cin >> v1;
	cin >> v2;
	cin >> s;
	cin >> t;
	sr = s + v1 * t + v2 * t;
	cout << "Distance between cars - " << sr << endl;
	return 0;
}