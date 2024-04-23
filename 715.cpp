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
	ll n, m;
	cin >> n >> m;

	vector <vector<char>> v1;
	for (ll i = 0; i < n; i++)
	{
		vector <char> g;
		for (ll j = 0; j < m; j++)
		{
			char tmp;
			cin >> tmp;

			g.push_back(tmp);
		}
		v1.push_back(g);
	}

	cout << "\n";

	vector <vector<char>> v2;
	for (ll i = 0; i < n; i++)
	{
		vector <char> u;
		for (ll j = 0; j < m; j++)
		{
			char tmp1;
			cin >> tmp1;

			u.push_back(tmp1);
		}
		v2.push_back(u);
	}

	vector <vector<char>> new_v;

	for (ll i = 0; i < n; i++)
	{
		vector <char> v;
		for (ll j = 0; j < m; j++)
		{
			if (v1[i][j] == 'W')
				v.push_back('B');
			else
				v.push_back('W');
		}
		new_v.push_back(v);
	}

	ll cnt = 0;
	for (ll i = 0; i < n; i++)
	{
		for (ll j = 0; j < m; j++)
		{
			if (new_v[i][j] != v2[i][j])
				cnt++;
		}
	}
	cout << cnt;
}

//Z