#include <iostream>
using namespace std;

int main()
{
	int n, t;
	string str;
	cin >> n;
	n %= 100;

	t = (n % 10) * 10;
	n /= 10;
	n = ((n + t) * 2) % 100;
	str = n > 50 ? "OH MY GOD" : "GOOD";
	cout << n << endl << str;
	return 0;
}