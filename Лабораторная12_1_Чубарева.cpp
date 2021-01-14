#include <iostream>
#include <cmath>
using namespace std;
void PowerA3(double A, double& B) {
    B = A * A * A;
}
int main(void)
{
    double A, B;
    for (int i = 1; i <= 5; i++) {
        cin >> A;
        cout << PowerA3(A, B) << endl;
    }
    return 0;
}