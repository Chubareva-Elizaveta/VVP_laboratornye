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
    int min = a[1];
    for (i = 1; i < N; i += 2) {
        if (a[i] < min) min = a[i];
    }

    cout << "Minimum element - " << min;
    return 0;
}