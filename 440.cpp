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

bool CheckThePointInCircle(ll x, ll y, ll cn)
{
	ll cx = cn * 25;
	ll cy = 0;
	double S = sqrt(pow(cx - x, 2.0) + pow(cy - y, 2));
	if (S <= 10)
		return true;
	else
		return false;
}

int main()
{
	vector <int> goal = {0, 0, 0, 0, 0};

	for (ll i = 0; i < 5; i++)
	{
		ll xi, yi;
		cin >> xi >> yi;

		for (ll cn = 0; cn < 5; cn++)
		{
			if (CheckThePointInCircle(xi, yi, cn) == true)
				goal[cn] = 1;
		}
	}

	ll cnt = 0;
	for (ll p = 0; p < goal.size(); p++)
		cnt += goal[p];

	cout << cnt;
}

//Z
