#include <iostream>
using namespace std;
int main() 
{
    float N;
    cin >> N;
    float fin = 0;
    int i;
    for (i = 1; i <= (2 * N - 1); i += 2) {
        fin += i;
        cout << fin << " ";
    }
    return 0;
}