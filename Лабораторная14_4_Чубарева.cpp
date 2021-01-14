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
    if (a[N - 1] > a[N - 2]) {
        cout << N;
    }
    else {
        i = N - 2;
        while ((i >= 1) && !((a[i - 1] < a[i]) && (a[i] > a[i + 1]))) {
            --i;
        }
        cout << i + 1; 
    }
    return 0;
}