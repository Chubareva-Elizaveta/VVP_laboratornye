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
    int d = a[1] - a[0];
    for (i = 1; i < N; ++i) {
        if (d != a[i] - a[i - 1]) {
            d = 0;
        }
    }
    cout << d;
    return 0;
}