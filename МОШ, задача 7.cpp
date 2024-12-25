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
#include <stack>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;



int main()
{
	ull n;
	cin >> n;

	ll cnt = 0;
	for (ll a1 = 1; a1 <= n; a1++) {
		double Disc = pow(double(2 * a1 - 1.0), 2.0) + (n * -2.0 * -4.0);
		if (sqrt(Disc) - int(sqrt(Disc)) == 0.0)
			cnt++;
	}

	cout << cnt;
}
//Z