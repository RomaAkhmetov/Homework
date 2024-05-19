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
		cout << xa << ' ' << ya * -1;
		return 0;
	}
	else
	{
		cout << xa * -1 << ' ' << ya;
		return 0;
	}
}

//Z