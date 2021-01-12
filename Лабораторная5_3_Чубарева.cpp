#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    c = a % b;
    cout << "Length of unoccupied part of segment A - " << c;
    return 0;
}