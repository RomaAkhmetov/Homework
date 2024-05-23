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
	ll c, h, o;
	cin >> c >> h >> o;

	if (c < 2 || h < 6 || o < 1)
		cout << 0;
	else
	{
		ll mn = min(c, min(h, o));
		if (mn == h)
			cout << h / 6;
		else if (mn == c)
			cout << c / 2;
		else
			cout << o;
	}
}

//Z