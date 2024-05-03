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

	if ((n % 400 == 0) || (n % 4 == 0 && n % 100 != 0))
	{
		cout << 12 << '/' << "09" << '/' << n;
		return 0;
	}
	else
	{
		cout << 13 << '/' << "09" << '/' << n;
		return 0;
	}
}

//Z