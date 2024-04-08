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
	string n;
	cin >> n;

	ll cnt = 0;
	for (ll i = 0; i < n.size(); i++)
	{
		if (n[i] == '0')
			cnt += 1;
		else if (n[i] == '6')
			cnt += 1;
		else if (n[i] == '8')
			cnt += 2;
		else if (n[i] == '9')
			cnt += 1;
		else
			cnt += 0;
	}
	cout << cnt;
}