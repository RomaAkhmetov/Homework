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
#include <unordered_map>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
 


int main()
{
	string s;
	cin >> s;

	ll begin = 1;
	ll t_b = begin;
	ll mx = t_b;
	vector <ll> v = { t_b };
	for (ll i = 0; i < s.size(); i++)
	{
		if (s[i] == '2')
		{
			begin--;
			if (begin != mx && find(v.begin(), v.end(), begin) == end(v))
			{
				mx++;
				v.push_back(begin);
			}
		}
		else if(s[i] == '1')
		{
			begin++;
			if (begin != mx && find(v.begin(), v.end(), begin) == end(v))
			{
				mx++;
				v.push_back(begin);
			}
		}
	}
	cout << mx;
}

//Z