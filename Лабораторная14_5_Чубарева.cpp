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

    int i2;
    for (i = 0; i < N - 1; ++i) {
        for (i2 = i + 1; i2 < N; ++i2) {
            if (a[i] == a[i2]) {
                cout << "Number are " << i + 1 << " and " << i2 + 1;
            }
        }
    }

    return 0;
}