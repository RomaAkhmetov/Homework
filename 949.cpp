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
	ll n, an, an_1;
	cin >> n >> an >> an_1;

	ll tn = n-1;
	ll res = an_1 - an;
	while (tn != 0)
	{
		res = an_1 - an;
		an_1 = an;
		an = res;
		tn--;
	}
	cout << an << ' ' << an_1;
}

//Z