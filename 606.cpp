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
	int x, y, z;
	cin >> x >> y >> z;

	int mx = max(x, max(y, z));
	int mn = min(x, min(y, z));
	int md = 0;
	if (mx == z && mn == x)
		md = y;
	else if (mx == z && mn == y)
		md = x;
	else if (mx == y && mn == x)
		md = z;
	else if (mx == y && mn == z)
		md = x;
	else if (mx == x && mn == y)
		md = z;
	else if (mx == x && mn == z)
		md = y;

	if (mn + md > mx)
		cout << "YES";
	else
		cout << "NO";
}