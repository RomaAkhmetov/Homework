#define _USE_MATH_DEFINES_
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
	ll n;
	cin >> n;

	ll P1 = n / 3;
	ll V1 = n / 3;
	ll K1 = n / 3;
	ll P2 = P1 / 2;
	ll V2 = V1 * 2;
	ll K2 = K1 / 2;
	ll K3 = K2 * 2;
	ll P3 = P2 - K3 / 4;
	ll V3 = V2 - K3 / 4;
	ll y = V3 / 2;
	ll z = K3 / 2;
	ll x = P3 + y + z;

	cout << x << ' ' << z << ' ' << y;
}

//Z