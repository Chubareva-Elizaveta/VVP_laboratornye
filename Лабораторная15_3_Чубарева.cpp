#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int a[N];
    int i;
    for (i = 0; i < N; ++i) {
        cin >> a[i];
    }
    int odd = 0;
    for (i = N - 1; i >= 0; --i) {
        if (a[i] % 2 != 0) {
            odd = a[i];
            a[i] += odd;
            break;
        }
    }
    for (i >= 0; --i;) {
        if (a[i] % 2 != 0 || a[i] == 1) {
            a[i] += odd;
        }
    }
    cout << "Array A - ";
    for (i = 0; i < N; ++i) {
        cout << a[i] << " ";
    }
    return 0;
}