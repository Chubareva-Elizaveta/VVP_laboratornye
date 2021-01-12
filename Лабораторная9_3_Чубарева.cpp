#include <iostream>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    if (n / 10 == 1)
        switch (n) {
        case 10:
            cout << "ten study assignments.";
            break;
        case 11:
            cout << "eleven study assignments.";
            break;
        case 12:
            cout << "twelve study assignments.";
            break;
        case 13:
            cout << "thirteen study assignments.";
            break;
        case 14:
            cout << "fourteen study assignments.";
            break;
        case 15:
            cout << "fifteen study assignments.";
            break;
        case 16:
            cout << "sixteen study assignments.";
            break;
        case 17:
            cout << "seventeen study assignments.";
            break;
        case 18:
            cout << "eighteen study assignments.";
            break;
        case 19:
            cout << "nineteen study assignments.";
            break;
        }
    else {
        switch (n / 10) {
        case 2:
            cout << "twenty ";
            break;
        case 3:
            cout << "thirty ";
            break;
        case 4:
            cout << "forty ";
            break;
        }

        switch (n % 10) {
        case 1:
            cout << "one ";
            break;
        case 2:
            cout << "two ";
            break;
        case 3:
            cout << "three ";
            break;
        case 4:
            cout << "four ";
            break;
        case 5:
            cout << "five ";
            break;
        case 6:
            cout << "six ";
            break;
        case 7:
            cout << "seven ";
            break;
        case 8:
            cout << "eight ";
            break;
        case 9:
            cout << "nine ";
            break;
        }

        switch (n % 10) {
        case 0:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 1:
        case 2:
        case 3:
        case 4:
        cout << "study assignments.";
        }
    }
    return 0;
}