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
	ll x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;

	ll xa, ya;
	cin >> xa >> ya;

	if (y1 == y2)
	{
		ll cnt1 = 0;
		ll tya = ya;
		while (tya != y1)
		{
			cnt1++;
			if (tya > y1)
				tya--;
			else
				tya++;
		}
		if (ya > y1)
		{
			ll r = y1 - cnt1;
			cout << xa << ' ' << r;
		}
		else
		{
			ll r = y1 + cnt1;
			cout << xa << ' ' << r;
		}
	}
	else
	{
		ll cnt = 0;
		ll txa = xa;
		while (txa != max(x1, x2))
		{
			cnt++;
			if (txa > max(x1, x2))
				txa--;
			else
				txa++;
		}
		if (xa > max(x1, x2))
		{
			ll res = max(x1, x2) - cnt;
			cout << res << ' ' << ya;
		}
		else
		{
			ll res = max(x1, x2) + cnt;
			cout << res << ' ' << ya;
		}
		return 0;
	}
}

//Z
