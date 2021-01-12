#include <iostream>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    cout << "Year of ";
    switch ((n) % 10) {
    case 0:
    case 1:
        cout << "white ";
        break;
    case 2:
    case 3:
        cout << "black ";
        break;
    case 4:
    case 5:
        cout << "green ";
        break;
    case 6:
    case 7:
        cout << "red ";
        break;
    case 8:
    case 9:
        cout << "yellow ";
        break;
    }
    switch ((n + 8) % 12) {
    case 0:
        cout << "rat";
        break;
    case 1:
        cout << "cow";
        break;
    case 2:
        cout << "tiger";
        break;
    case 3:
        cout << "rabbit";
        break;
    case 4:
        cout << "dragon";
        break;
    case 5:
        cout << "snake";
        break;
    case 6:
        cout << "horse";
        break;
    case 7:
        cout << "sheep";
        break;
    case 8:
        cout << "monkey";
        break;
    case 9:
        cout << "hen";
        break;
    case 10:
        cout << "dog";
        break;
    case 11:
        cout << "pig";
        break;
    }

    return 0;
}