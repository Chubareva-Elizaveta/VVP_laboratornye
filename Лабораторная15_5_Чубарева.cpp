#include <iostream>
using namespace std;
int swap(int* b1, int* b2)
{
    *b1 += *b2;
    *b2 = *b1 - *b2;
    *b1 = *b1 - *b2;
    return 0;
}
int main()
{
    int N;
    cin >> N;
    int a[N];
    int i;
    for (i = 0; i < N; ++i) {
        cin >> a[i];
    }
    for (i = 1; i < N; ++i) {
        if (a[i - 1] > a[i]) {
            swap(&a[i - 1], &a[i]);
        }
        else break;
    }
    cout << "Array A  - ";
    for (i = 0; i < N; ++i) {
        cout << a[i] << " ";
    }
    return 0;
}