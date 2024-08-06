#define _USE_MATH_DEFINES_
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
#include <unordered_map>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
	ll n;
	cin >> n;

	ll b1, b2;
	cin >> b1 >> b2;

	ll l;
	cin >> l;

	for (ll i = 0; i < n; i++)
	{
		ll xi, yi;
		cin >> xi >> yi;

		double s = sqrt(pow(xi - b1, 2) + pow(yi - b2, 2));
		if (s <= l)
		{
			cout << i + 1;
			return 0;
		}
	}
	cout << "Yes";
}

//Z
