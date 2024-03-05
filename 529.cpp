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

double fd(int px, int py, int px2, int py2)
{
	int S1 = abs(px - px2);
	int S2 = abs(py - py2);
	double t = sqrt(pow(S1, 2) + pow(S2, 2));
	return t;
}


int main()
{

	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;

	double p = fd(x1, y1, x2, y2);
	cout << fixed << setprecision(5) <<  p;
	
}