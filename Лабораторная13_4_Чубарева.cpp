#include <iostream>
using namespace std;
int main()
{
    int N, i;
    int a[N];
    cin >> N;
    for (i = 0; i < N; ++i) {
        cin >> a[i];
    }
    for (i = 0; i < N / 2; ++i) {
        cout << a[i] << " ";
        cout << a[N - i - 1] << " ";
    }
    if (N % 2 != 0) {
        cout << a[(N / 2)] << " ";
    }
    return 0;
}