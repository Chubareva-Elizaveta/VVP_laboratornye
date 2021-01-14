#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int a[N];
    int D, i, pow;
    cin >> a[0];
    cin >> D;
    pow = 1;
    for (i = 1; i < N; ++i) {
        pow *= D;
        a[i] = a[0] * pow;
    }
    for (i = 0; i < N; ++i) {
        cout << a[i] << " ";
    }
    return 0;
}