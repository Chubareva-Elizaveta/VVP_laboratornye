#include <iostream>
using namespace std;
int main()
{
	int N;
	cin >> N;
	int a[N], b[N];
	int i;
	for (i = 0; i < N; ++i) {
		cin >> a[i];
	}
	for (i = 0; i < N; ++i) {
		cin >> b[i];
	}
	for (i = 0; i < N; ++i) {
		a[i] += b[i];
		b[i] = a[i] - b[i];
		a[i] = a[i] - b[i];
	}
	cout << "Array A - ";
	for (i = 0; i < N; ++i) {
		cout << a[i] << " " ;
	}
	cout << endl;
	cout << "Array B - ";
	for (i = 0; i < N; ++i) {
		cout << b[i] << " ";
	}
	return 0;
}