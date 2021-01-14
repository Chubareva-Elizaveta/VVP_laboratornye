#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int a[N], b[N];
    int K;
    for (K = 0; K < N; ++K) {
        cin >> a[K];
    }
    int i;
    for (K = 0; K < N; ++K) {
        b[K] = 0;
        for (i = 0; i <= K; ++i) {
            b[K] += a[i];
        }
        b[K] /= K + 1;
    }
    cout << "Array B - ";
    for (K = 0; K < N; ++K) {
        cout << b[K] << " "; 
    }
    return 0;
}