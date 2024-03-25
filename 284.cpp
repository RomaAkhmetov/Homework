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

	vector <ll> a(n);
	for (ll i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << ' ';

	ll m; 
	cin >> m;

	for (ll i = 0; i < m; i++)
	{
		ll ik, jk;
		cin >> ik >> jk;

		vector <ll> res;
		while (ik <= jk)
		{
			res.push_back(a[ik - 1]);
			ik++;
		}

		for (ll o = 0; o < res.size(); o++)
		{
			cout << res[o] << ' ';
		}
		cout << endl;
	}
	
}


