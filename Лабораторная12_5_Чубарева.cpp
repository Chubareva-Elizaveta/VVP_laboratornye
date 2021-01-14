#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;
float fact2(int N) {
    int r = 1;
    for (; N > 0; N -= 2) {
        r *= N;
    }
    return r;
}
int main()
{
    int i, N;
    cin >> N;
    cout << "Double factorial - " << fact2(N) << endl;
    return 0;
}