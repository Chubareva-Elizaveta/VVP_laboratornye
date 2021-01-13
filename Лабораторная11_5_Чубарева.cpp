#include <iostream>
using namespace std;
int main() {
    int A, B;
    cin >> A;
    cin >> B;
    while ((A != 0) & (B != 0)) {
        if (A > B) {
            A = A % B;
        }
        else {
            B = B % A;
        }
    }
    cout << "Greatest common divisor - " << A + B;
    return 0;
}