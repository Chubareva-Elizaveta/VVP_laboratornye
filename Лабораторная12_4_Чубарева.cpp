#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;
int quarter(float x, float y)
{
    if ((x > 0) && (y > 0)) { 
        return 1; 
    }
    if ((x < 0) && (y > 0)) { 
        return 2;
    }
    if ((x < 0) && (y < 0)) { 
        return 3;
    }     
    if ((x > 0) && (y < 0)) { 
        return 4; 
    }
}
int main()
{
    int i;
    for (i = 1; i <= 3; ++i) {
        float x, y;
        cin >> x;
        cin >> y; 
        cout << "Coordinate quarter numbers - " << quarter(x, y) << endl;
    }
    return 0;
}