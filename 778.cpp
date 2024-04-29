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
	ll max = 0;
	vector <ll> a(31);
	for (ll i = 0; i < a.size(); i++)
	{
		cin >> a[i];

		if (a[i] > max)
			max = a[i];
	}
	ll res = 0;
	for (ll j = 0; j < a.size(); j++)
	{
		if (a[j] != max)
			res += (max - a[j]);
	}
	if (res / 4 >= max)
	{
		cout << res / 4;
		return 0;
	}
	else
	{
		while ((res / 4) < max)
		{
			if (res / 4 >= max)
			{
				cout << res / 4;
				return 0;
			}
			else
			{
				max++;
				res /= 4;
				for (ll j = 0; j < a.size(); j++)
				{
					if (a[j] != max)
						res += (max - a[j]);
				}
			}
		}
		cout << res / 4;
	}
}

//Z