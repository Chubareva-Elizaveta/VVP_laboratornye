#include <iostream>
using namespace std;
int main()
{
    int N, K, L;
    cin >> N;
    int a[N];
    cin >> K;
    cin >> L;
    int i;
    float j;
    for (i = 0; i < N; ++i) {
        cin >> a[i];
        j++;
    }
    int sum = 0;
    for (i = K; i < N; ++i) {
        sum += a[i];
    }

    for (i = 0; i < L - 1; ++i) {
        sum += a[i];
    }

    cout << (float)sum / (float)j;
    return 0;
}