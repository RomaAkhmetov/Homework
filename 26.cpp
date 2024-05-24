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
	ll x, y, r;
	cin >> x >> y >> r;

	ll x1, y1, r1;
	cin >> x1 >> y1 >> r1;

	ll a = abs(x - x1);
	ll b = abs(y - y1);
	double c = sqrt(pow(a, 2) + pow(b, 2));
	if (c <= max(r, r1))
	{
		if (c + min(r1, r) >= max(r, r1))
			cout << "YES";
		else 
			cout << "NO";
		return 0;
	}
	else
	{
		if ((r + r1) >= c)
			cout << "YES";
		else
			cout << "NO";
	}
}

//Z