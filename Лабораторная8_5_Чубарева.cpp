#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    if (a == 0) {
        cout << "Zero number" << endl;
    }
    else {
        if (a > 0) {
            cout << "Positive ";
        }
        else {
            cout << "Negative ";
        }
        if ((a % 2) == 0) {
            cout << "even ";
        }
        else {
            cout << "odd ";
        }
    }
    cout << "number." << endl;
    return 0;
}