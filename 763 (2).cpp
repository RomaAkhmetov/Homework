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
	ll x, y;
	cin >> x >> y;

	if (x == 1 && y != 1)
	{
		ll res = y - 1;
		if (res % 2 == 0)
			cout << 2;
		else
			cout << 1;
	}
	else if (x != 1 && y == 1)
	{
		ll r = x - 1;
		if (r % 2 != 0)
			cout << 1;
		else
			cout << 2;
	}
	else if (x != 1 && y != 1)
	{
		ll re = x - 1;
		if (re % 2 == 0)
			cout << 2;
		else
			cout << 1;
	}
	else if (x == 1 && y == 1)
		cout << 0;
	
}

//Z