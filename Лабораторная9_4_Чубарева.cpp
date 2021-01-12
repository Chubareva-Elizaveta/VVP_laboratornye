#include <iostream>
using namespace std;
int main()
{
    int K;
    cin >> K;
    switch (K / 100) {
    case 1: cout << "One hundred "; break;
    case 2: cout << "Two hundred "; break;
    case 3: cout << "Three hundred "; break;
    case 4: cout << "Four hundred "; break;
    case 5: cout << "Five hundred "; break;
    case 6: cout << "Six hundred "; break;
    case 7: cout << "Seven hundred "; break;
    case 8: cout << "Eight hundred "; break;
    case 9: cout << "Nine hundred "; break;
    }
    switch ((K % 100) / 10) {
    case 0: break;
    case 2: cout << "twenty "; break;
    case 3: cout << "thirty "; break;
    case 4: cout << "forty "; break;
    case 5: cout << "fifty "; break;
    case 6: cout << "sixty "; break;
    case 7: cout << "seventy "; break;
    case 8: cout << "eighty "; break;
    case 9: cout << "ninety "; break;
    case 1: switch (K % 100) {
    case 11: cout << "eleven "; break;
    case 12: cout << "twelve "; break;
    case 13: cout << "thirteen "; break;
    case 14: cout << "fourteen "; break;
    case 15: cout << "fifteen "; break;
    case 16: cout << "sixteen "; break;
    case 17: cout << "seventeen "; break;
    case 18: cout << "eighteen "; break;
    case 19: cout << "nineteen "; break;
    case 10: cout << "ten "; break;
    }
    }
    if ((K % 100 / 10) != 1) {
        switch (K % 10) {
        case 0: break;
        case 1: cout << "one "; break;
        case 2: cout << "two "; break;
        case 3: cout << "three "; break;
        case 4: cout << "four "; break;
        case 5: cout << "five "; break;
        case 6: cout << "six "; break;
        case 7: cout << "seven "; break;
        case 8: cout << "eight "; break;
        case 9: cout << "nine "; break;
        }
    }
    return 0;
}