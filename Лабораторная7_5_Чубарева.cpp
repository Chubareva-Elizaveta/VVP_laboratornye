#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int A;
    cin >> A;
    A = abs(A);
    if (A % 10 == A / 1000 & A % 100 / 10 == A % 1000 / 100) {
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;
    }
    return 0;
}