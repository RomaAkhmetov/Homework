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



int main()
{
	ll a, b, c;
	cin >> a >> b >> c;

	if (a != 0 && b != 0 && c != 0)
	{
		double D = pow(b, 2.0) + (-4.0 * a * c);
		if (D > 0)
		{
			double x1 = (-1.0 * b + sqrt(D)) / (2.0 * a);
			double x2 = (-1.0 * b - sqrt(D)) / (2.0 * a);
			cout << 2 << "\n";
			cout << fixed << setprecision(6) << x1 << "\n";
			cout << fixed << setprecision(6) << x2;
			return 0;
		}
		else if (D == 0)
		{
			double x1 = (-1.0 * b) / (2.0 * a);
			cout << 1 << "\n";
			cout << fixed << setprecision(6) << x1;
			return 0;
		}
		else
		{
			cout << 0;
			return 0;
		}
	}
	else if (a == 0 && b != 0 && c != 0)
	{
		double x = (c * -1.0) / b;
		cout << 1 << "\n";
		cout << fixed << setprecision(6) << x;
	}
	else if (a != 0 && b == 0 && c != 0)
	{
		if (a < 0 && c < 0)
		{
			cout << 0;
			return 0;
		}
		else if (a > 0 && c > 0)
		{
			cout << 0;
			return 0;
		}
		double k = (c * -1.0) / a;
		double x1 = sqrt(k);
		double x2 = sqrt(k) * -1.0;
		cout << 2 << "\n";
		cout << fixed << setprecision(6) << x1 << "\n";
		cout << fixed << setprecision(6) << x2;
		return 0;
	}
	else if (a != 0 && b != 0 && c == 0)
	{
		double x1 = 0.0;
		double x2 = (b * -1.0) / a;
		cout << 2 << "\n";
		cout << fixed << setprecision(6) << x1;
		cout << fixed << setprecision(6) << x2;
		return 0;
	}
	else if (a == 0 && b == 0 && c != 0)
	{
		cout << 0;
		return 0;
	}
	else if (a == 0 && b != 0 && c == 0)
	{
		double x = 0.0;
		cout << 1 << "\n";
		cout << fixed << setprecision(6) << x;
		return 0;
	}
	else if (a != 0 && b == 0 && c == 0)
	{
		double x = 0.0;
		cout << 1 << "\n";
		cout << fixed << setprecision(6) << x;
		return 0;
	}
	else if (a == 0 && b == 0 && c == 0)
	{
		cout << -1;
		return 0;
	}
}

//Z