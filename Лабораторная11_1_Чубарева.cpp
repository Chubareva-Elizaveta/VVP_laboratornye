#include <iostream>
using namespace std;
int main()
{
    int A, B;
    cin >> A;
    cin >> B;
    for (int i = A; i <= B; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}