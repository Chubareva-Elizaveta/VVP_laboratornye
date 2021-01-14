#include <iostream>
using namespace std;
int main()
{
    int N, i;
    cin >> N;
    int a[N];
    for (i = 0; i < N; ++i) {
        cin >> a[i];
    }
    for (i = 0; i < N; i += 2) {
        cout << a[i] << " ";
    }
    for (i = N - (N % 2) - 1; i >= 1; i -= 2) {
        cout << a[i] << " ";
    }
    return 0;
}