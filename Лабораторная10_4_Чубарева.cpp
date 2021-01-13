#include <iostream>
using namespace std;
int main()
{
    float A;
    cin >> A;
    int N;
    cin >> N;
    float A2 = 1, fin = 1;
    int i;
    for (i = 1; i <= N; ++i) {
        A2 *= A;
        fin += A2;
    }
    cout << fin;
    return 0;
}