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
	ll n, m, f, l;
	cin >> n >> m >> f >> l;

	ll f1 = n - l - m;
	ll m1 = n - l - f;
	ll z = max(f, m) - max(f1, m1);
	cout << z << ' ' << m1 << ' ' << f1;
}

//Z