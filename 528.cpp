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
	ll n, k;
	cin >> n >> k;

	ll a1 = n;
	ll q = n - 2;
	ll a1_q = a1 + (q - 1);
	ll an_q = a1_q + q * (k - 2);
	ll Sn_q = ((a1_q + an_q) * (k - 1)) / 2;
	ll res = a1 + Sn_q;
	cout << res;
}

//Z