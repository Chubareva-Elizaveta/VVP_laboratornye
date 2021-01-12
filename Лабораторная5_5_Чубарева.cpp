#include <iostream>
using namespace std;
int main()
{
	int abc, bca;
	cin >> abc;
	bca = (abc % 100 / 10 * 100) + (abc % 10) * 10 + abc / 100;
	cout << "The resulting number - " << bca;
	return 0;
}