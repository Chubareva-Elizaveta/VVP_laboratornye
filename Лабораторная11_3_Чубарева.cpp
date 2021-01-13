#include <iostream>
using namespace std;
int main()
{
	int N;
	int K = 0;
	int S = 0;
	cin >> N;
	while (S <= N) {
		++K;
		S += K;
	}
	cout << "The smallest integer K - " << K << endl;
	cout << "Sum - " << S << endl;
	return 0;
}