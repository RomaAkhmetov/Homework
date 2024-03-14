#define _USE_MATH_DEFINES 
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
#include <iostream>
#include <set>
#include <numeric>
#include <queue>
#include <map>
#include <iomanip>
#include <sstream>


using namespace std;

typedef long long ll;
typedef unsigned long long ull;



int main()
{
	ll n;
	cin >> n;

	ll mx = n * 6;
	if (n <= 6)
	{
		if (n == 1)
			cout << 6 << ' ' << mx;
		else if (n == 2)
			cout << 5 << ' ' << mx;
		else if (n == 3)
			cout << 4 << ' ' << mx; 
		else if (n == 4)
			cout << 3 << ' ' << mx;
		else if (n == 5)
			cout << 2 << ' ' << mx;
		else if (n == 6)
			cout << 1 << ' ' << mx;
	}
	else
	{
		ll r = n / 6;
		if (n % 6 != 0)
		{
			ll ost = n % 6;
			if (ost == 1)
				cout << 1 * r + 6 << ' ' << mx;
			else if (ost == 2)
				cout << 1 * r + 5 << ' ' << mx;
			else if (ost == 3)
				cout << 1 * r + 4 << ' ' << mx;
			else if (ost == 4)
				cout << 1 * r + 3 << ' ' << mx;
			else if (ost == 5)
				cout << 1 * r + 2 << ' ' << mx;
			else if (ost == 6)
				cout << 1 * r + 1 << ' ' << mx;
		}
		else
		{
			ll r1 = n / 6;
			cout << r1 * 1 << ' ' << mx;
		}
	}
}                         