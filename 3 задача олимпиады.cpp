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
#include <stack>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

ll convert_months_to_days(ll m, ll y)
{
	if (m == 2 && (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)))
		return 29;
	else if (m == 2)
		return 28;
	else if ((m % 2 != 0 && m < 8) || (m > 7 && m % 2 == 0))
		return 31;
	else
		return 30;
}

bool is_motley_data_or_isn_t(string checked)
{
	for (ll p = 0; p < checked.size() - 1; p++)
	{
		if (checked[p] == '.')
			continue;
		for (ll k = p + 1; k <= checked.size() - 1; k++)
		{
			if (checked[k] == '.')
				continue;
			if (checked[p] == checked[k])
				return false;
		}
	}
	return true;
}

int main()
{
	ll d;
	cin >> d;

	ll m;
	cin >> m;

	ll y;
	cin >> y;

	ll i1 = d + 1;
	ll i2 = m;
	ll i3 = y;
	string s = "";
	if (i1 > convert_months_to_days(i2, i3))
	{
		i1 %= convert_months_to_days(i2, i3);
		i2++;
		if (i2 > 12)
		{
			i2 %= 12;
			i3++;
		}
	}
	s = to_string(i1) + '.' + to_string(i2) + '.' + to_string(i3);
	while (is_motley_data_or_isn_t(s) != true)
	{
		s = to_string(i1) + '.' + to_string(i2) + '.' + to_string(i3);
		i1++;
		if (i1 > convert_months_to_days(i2, i3))
		{
			i1 %= convert_months_to_days(i2, i3);
			i2++;
			if (i2 > 12)
			{
				i2 %= 12;
				i3++;
			}
		}
	}

	cout << s;
}

//Z