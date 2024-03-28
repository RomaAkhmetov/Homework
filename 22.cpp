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

	vector <ll> ost;
	ll a = 0;
	while (n / 2 != 0)
	{
		a = n % 2;
		ost.push_back(a);
		n /= 2;
		if (n == 1)
		{
			a = n % 2;
			ost.push_back(a);
		}
    }
	ll cnt = 0;
	for (ll i = 0; i < ost.size(); i++)
	{
		if (ost[i] == 1)
			cnt++;
	}
	cout << cnt;
}


