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

ll positive_integers_sum(const vector <ll> &a)
{
	ll sum = 0;
	for (auto &el1 : a)
	{
		if (el1 > 0)
			sum += el1;
	}
	return sum;
}

ll get_indmn(const vector <ll>& a)
{
	ll mn = 1e9;
	ll indmn = -1;
	for (ll i = 0; i < a.size(); i++)
	{
		if (mn > a[i])
		{
			mn = a[i];
			indmn = i;
		}
	}
	return indmn;
}

ll get_indmx(const vector <ll>& a)
{
	ll mx = -1e9;
	ll indmx = -1;
	for (ll i = 0; i < a.size(); i++)
	{
		if (mx < a[i])
		{
			mx = a[i];
			indmx = i;
		}
	}
	return indmx;
}

ll get_mul(const vector <ll>& a, ll indmn, ll indmx)
{
	ll pr = 1;
	for (int j = min(indmn, indmx) + 1; j < max(indmx, indmn); j++)
	{
		pr *= a[j];
	}
	return pr;
}

int main()
{
	ll n;
	cin >> n;

	vector <ll> a(n);
	for (auto & el : a)
	{
		cin >> el;
	}
	
	cout << positive_integers_sum(a) << ' ' << get_mul(a, get_indmn(a), get_indmx(a));
}


                      
