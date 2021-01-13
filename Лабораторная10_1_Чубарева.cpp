#include <iostream>
using namespace std;
int main()
{
    float c, m;
    cin >> c;
    for (m = 0.1; m < 1.1; m += 0.1) {
        cout << " Price of " << m << " kg is " << c * m << endl;
    }
    return 0;
}