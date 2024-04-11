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

	if (n == 2)
		cout << 2;
	else if (n == 1)
		cout << 1;
	else if (n == 0)
		cout << 0;
	else
	{
		ll res = n * (n - 1) * (n - 2);
		cout << res;
	}
}