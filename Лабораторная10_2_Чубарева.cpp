#include <iostream>
using namespace std;
int main() 
{
    int N;
    float a = 1;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        a = a * (1 + 0.1 * i);
    }
    cout << "Result is " << a;
    return 0;
}