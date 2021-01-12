#include <iostream>
using namespace std;
int main() 
{
	int N, m;
	cin >> N;
	m = N % 60;
	cout << "The number of seconds elapsed since the beginning of the last minute - " << m << endl;
	return 0;
}