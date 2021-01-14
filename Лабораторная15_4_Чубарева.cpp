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
    int min = 0, max = 0;
    for (i = N - 1; i >= 0; --i) {
        if (a[i] > a[max]) {
            max = i;
        }
        if (a[i] < a[min]) {
            min = i;
        }
    }
    if (max < min) {
        max += min;
        min = max - min;
        max = max - min;
    }
    for (i = min + 1; i < min + (max - min); ++i) {
        a[i] = 0;
    }
    cout << "Array A - ";
    for (i = 0; i < N; ++i) {
        cout << a[i] << " ";
    }
    return 0;
}