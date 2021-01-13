#include <iostream>
using namespace std;
int main()
{
    float P;
    cin >> P;
    int K = 1;
    float S = 1000;
    while (S <= 1100) {
        ++K;
        S += S * P / 100;
    }
    cout << "Number of months - " << K << endl;
    cout << "Total deposit amount - " << S << endl;
    return 0;
}