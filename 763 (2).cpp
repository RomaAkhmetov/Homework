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
	ll x, y;
	cin >> x >> y;

	if (x == 1 && y == 1)
		cout << 0;
	else if (x == y && (x != 1 && y != 1))
		cout << 2;
	else
		cout << 1;
}

//Z
