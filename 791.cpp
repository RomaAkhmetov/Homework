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
	ll z;
	cin >> z;

	if (z == 57)
	{
		ll res1 = z + 1;
		ll res2 = z - 8;
		cout << min(res1, res2) << ' ' << max(res1, res2);
		return 0;
	}
	else if (z == 1)
	{
		ll res3 = z + 1;
		ll res4 = z + 8;
		cout << min(res3, res4) << ' ' << max(res3, res4);
		return 0;
	}
	else if (z == 8)
	{
		ll res5 = z - 1;
		ll res6 = z + 8;
		cout << min(res5, res6) << ' ' << max(res5, res6);
		return 0;
	}
	else if (z == 64)
	{
		ll res7 = z - 1;
		ll res8 = z - 8;
		cout << min(res7, res8) << ' ' << max(res7, res8);
		return 0;
	}
	else if (z < 57 && ((z - 1) % 8 == 0) && (z % 8 != 0))
	{
		ll res9 = z - 8;
		ll res10 = z + 8;
		ll res11 = z + 1;
		vector <ll> a1 = { res9, res10, res11 };
		sort(a1.begin(), a1.end());
		for (ll i = 0; i < a1.size(); i++)
			cout << a1[i] << ' ';
		return 0;
	}
	else if (z < 64 && (z % 8 == 0) && (z - 1 % 8 != 0))
	{
		ll res12 = z - 8;
		ll res13 = z + 8;
		ll res14 = z - 1;
		vector <ll> a2 = { res12, res13, res14 };
		sort(a2.begin(), a2.end());
		for (ll i = 0; i < a2.size(); i++)
			cout << a2[i] << ' ';
		return 0;
	}
	else if (z < 8 && z > 1)
	{
		ll res15 = z + 8;
		ll res16 = z - 1;
		ll res17 = z + 1;
		vector <ll> a3 = { res15, res16, res17 };
		sort(a3.begin(), a3.end());
		for (ll i = 0; i < a3.size(); i++)
			cout << a3[i] << ' ';
		return 0;
	}
	else if (z > 57 && z < 64)
	{
		ll res18 = z - 1;
		ll res19 = z + 1;
		ll res20 = z - 8;
		vector <ll> a4 = { res18, res19, res20 };
		sort(a4.begin(), a4.end());
		for (ll i = 0; i < a4.size(); i++)
			cout << a4[i] << ' ';
		return 0;
	}
	else
	{
		ll res21 = z + 8;
		ll res22 = z - 1;
		ll res23 = z + 1;
		vector <ll> a5 = { res21, res22, res23 };
		sort(a5.begin(), a5.end());
		for (ll i = 0; i < a5.size(); i++)
			cout << a5[i] << ' ';
		return 0;
	}
}


