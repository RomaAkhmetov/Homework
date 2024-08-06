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

struct Point
{
	ll x;
	ll y;
};
bool operator<(const Point& lhs, const Point& rhs)
{
	if (lhs.x != rhs.x)
		return lhs.x < rhs.x;
	return lhs.y < rhs.y;
}

void Print(const vector<Point>& v)
{
	for (auto& [x, y] : v)
		cout << x << ' ' << y << "\n";
}

int main()
{
	int p = 0;
	cin >> p;

	vector <Point> v(p);
	for (auto& [x, y] : v)
		cin >> x >> y;
	Print(v);
	sort(v.begin(), v.end());
	Print(v);
	/*Point o, p;
	o.x = 1;
	o.y = 1;
	p.x = 0;
	p.y = 0;
	if (o < p)
		cout << 0;
	else
		cout << 1;*/
}

//Z