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

double Fd(int px, int py, int px2, int py2)
{
	int S1 = abs(px - px2);
	int S2 = abs(py - py2);
	double t = sqrt(pow(S1, 2) + pow(S2, 2));
	return t;
}

int main()
{
	int x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	double a = Fd(x1, y1, x2, y2);
	double b = Fd(x1, y1, x3, y3);
	double c = Fd(x2, y2, x3, y3);
	double p = (a + b + c) / 2.0;
	double Str = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << Str;
}
