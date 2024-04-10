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
	ll n, i, j;
	cin >> n >> i >> j;

	if (abs(i - j) <= 1 || n <= 2)
	{
		cout << 0;
		return 0;
	}
	ll i1 = 0;
	ll j1 = max(i,j) - min(i,j);
	ll raz = j1 - 1;
	ll raz2 = n - j1 - 1;
	cout << min(raz, raz2);
}
