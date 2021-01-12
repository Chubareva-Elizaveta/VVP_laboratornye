#include <iostream>
using namespace std;
int main()
{
    int N;
    char C;
    cin >> C;
    cin >> N;
    switch (C) {
    case 'N':
        switch (N) {
        case 1:
            C = 'W';
            break;
        case 0:
            C = 'N';
            break;
        case -1:
            C = 'E';
            break;
        }
        break;
    case 'E':
        switch (N) {
        case 1:
            C = 'N';
            break;
        case 0:
            C = 'E';
            break;
        case -1:
            C = 'S';
            break;
        }
    case 'S':
        switch (N) {
        case 1:
            C = 'E';
            break;
        case 0:
            C = 'S';
            break;
        case -1:
            C = 'W';
            break;
        }
        break;
    case 'W':
        switch (N) {
        case 1:
            C = 'S';
            break;
        case 0:
            C = 'W';
            break;
        case -1:
            C = 'N';
            break;
        }
    }
    cout << C;
    return 0;
}