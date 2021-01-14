#include <iostream>
using namespace std;
int main()
{
	int N, i;
	int a[N];
	cin >> N;
	cin >> a[0];
	cin >> a[1];
	for (i = 2; i < N; ++i) {
		a[i] = 0;
		int i2;
		for (i2 = 0; i2 < i; ++i2) a[i] += a[i2];
	}
	for (i = 0; i < N; ++i) {
		cout << a[i] << " ";
	}
	return 0;
}