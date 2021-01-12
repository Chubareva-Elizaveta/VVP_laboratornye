#include <iostream>
using namespace std;
int main() 
{
    int x, y;
    cin >> x;
    cin >> y;
    if (x > 0 && y > 0) {
        cout << "First quarter" << endl;
    }
    else if (x < 0 && y>0) {
        cout << "Second quarter" << endl;
    }
    else if (x < 0 && y < 0) {
        cout << "Third quarter" << endl;
    }
    else
        cout << "Fourth quarter" << endl;
    return 0;
}