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
 
ll GCD(ll a, ll b)
{
	while (a && b)
	{
		if (a > b)
			a %= b;
		else
			b %= a;
	}
	return a + b;
}

ll LCF(ll x, ll y)
{
	ull LF = (x * y) / GCD(x, y);
	return LF;
}
int main()
{
	ull n, p;
	cin >> n >> p;

	ull d_p = 100 - p;
	ull NOD = GCD(d_p, 100);
	ull n_d_p = d_p / NOD;
	ull h = 100 / NOD;
	ull t;
	ull k = n_d_p;
	ull z = (h * n);
	ull NOD_P = GCD(p, 100);
	ull n_p = p / NOD_P;
	ull h1 = 100 / GCD(p, 100);
	ull k1 = n_p;
	ull z1 = h1;
	ull L = LCF(z, z1);
	ull d_m_z = L / z;
	ull d_m_z1 = L / z1;
	ull New_k = k * d_m_z;
	ull New_k1 = k1 * d_m_z1;
	ull sum = New_k + New_k1;
	double res = (double) L / (double) sum;
	cout << fixed << setprecision(9) << res;
}

//Z