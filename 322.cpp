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
	string s;
	cin >> s;

	ll f1 = 0;
	ll f2 = 1;
	vector <ll> f = {1};
	ll res = 0;
	while (res <= s.size())
	{
		res = f1 + f2;
		f.push_back(res);
		f1 = f2;
		f2 = res;
	}
	vector <ll> ind;
	for (ll i = 1; i <= s.size(); i++)
		ind.push_back(i);
	string res1 = "";
	for (ll j = 0; j < f.size(); j++)
	{
		if (j == 1)
			continue;
		else
		{
			if (f[j] - 1 < ind.size() && f[j] == ind[f[j] - 1])
				res1 += s[ind[f[j] - 1] - 1];
		}
	}
	cout << res1;
}