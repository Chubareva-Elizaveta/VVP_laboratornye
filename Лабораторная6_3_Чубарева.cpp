#include <iostream> 
using namespace std;
int main()
{
	int K, N, r;
	cin >> K;
	cin >> N;
	r = (K + N - 2) / 7 + 1;
	cout << "Number of day of the week - " << r << endl;
	return 0;
}