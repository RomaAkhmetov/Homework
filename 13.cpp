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

int ctoi(char a)
{
	return a - '0';
}

int main()
{
	string n, m;
	cin >> n >> m;

	ll bull = 0;
	vector <ll> v;
	ll i = 0;
	ll size_n = n.size();
	ll size_m = m.size();
	while (size_n != 0 && size_m != 0)
	{
		if (n[i] == m[i])
		{
			bull++;
			i++;
			size_n -= 1;
			size_m -= 1;
		}
		else
		{
			v.push_back(ctoi(n[i]));
			v.push_back(ctoi(m[i]));
			i++;
			size_n -= 1;
			size_m -= 1;
		}
	}
	ll cow = 0;
	sort(v.begin(), v.end());
	for (ll i = 0; i < v.size(); i++)
	{
		if (i + 1 != v.size() && v[i] == v[i + 1])
			cow++;
	}
	cout << bull << ' ' << cow;
}

//Z