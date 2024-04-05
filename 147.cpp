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

	vector <ll> a = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597,
	2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811, 514229 };
	ll l = 0;
	ll r = a.size() - 1;
	ll m;
	while (l < r)
	{
		if (l == n)
		{
			cout << a[l];
			return 0;
		}
		else if (r == n)
		{
			cout << a[r];
			return 0;
		}
		else
		{
			m = (l + r) / 2;
			if (m == n)
			{
				cout << a[m];
				return 0;
			}
			else if (m > n)
				r = m - 1;

			else if (m < n)
				l = m + 1;
		}
	}
}
