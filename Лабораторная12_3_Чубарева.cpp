#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;
double RingS(double R1, double R2)
{
    float S1, S2;
    float pi = 3.14;
    cin >> R1 >> R2;
    S1 = pi * (R1 * R1);
    S2 = pi * (R2 * R2);
    return S1 - S2;
}
int main()
{
    double R1, R2;
    int i;
    for (int i = 1; i <= 3; i++)
    {
        cin >> R1;
        cin >> R2;
        if (R1 < R2) {
            cout << "Area of figure - " << (RingS(R1) - RingS(R2));
        }
        else {
            cout << "Wrong data";
        }
    }
    return 0;
}