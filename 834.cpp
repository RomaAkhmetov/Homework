#define _USE_MATH_DEFINES
#include <cmath>
#include <algorithm>
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
#include <numbers>


using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
	double xk, yk;
	cin >> xk >> yk;

	double xc, yc, rc;
	cin >> xc >> yc >> rc;

	if (sqrt(pow(abs(xc - xk), 2.0) + pow(abs(yc - yk), 2.0)) <= rc)
	{
		double res1 = M_PI * pow(rc, 2.0);
		cout << fixed << setprecision(5) << res1;
		return 0;
	}
	double AO = sqrt(pow(abs(xc - xk), 2.0) + pow(abs(yc - yk), 2.0));
	double AC = sqrt(pow(AO, 2.0) - pow(rc, 2.0));
	double alfa = atan(AC / rc) * 2.0;
	double res = M_PI * pow(rc, 2.0) + 2.0 * ((AC * rc) / 2.0) - (alfa * pow(rc, 2.0) / 2.0);
	cout << fixed <<  setprecision(5) << res;
}

//Z
