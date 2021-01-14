#include <iostream>
#include <cmath>
using namespace std;
int Sign(double x)
{
    if (x < 0) {
        return -1;
    }
    else if (x == 0) {
        return 0;
    }
    else {
        return 1;
    }
}
int main()
{
    double A, B;
    cin >> A >> B;
    cout << Sign(A) + Sign(B);
    return 0;
}