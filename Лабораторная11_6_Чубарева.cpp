#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int F1 = 1, F2 = 1, F = 0, K = 2;
    while (F < N) {
        ++K;
        F = F2 + F1;
        F2 = F1;
        F1 = F;
    }
    cout << "Serial number - " << K;
    return 0;
}
