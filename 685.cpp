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
	ll a1, a2, a3, b1, b2, b3;
	cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;

	vector <ll> a = { a1, a2, a3 };
	vector <ll> b = { b1, b2, b3 };
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	ll mxa = a[a.size() - 1];
	ll mda = a[1];
	ll mna = a[0];
	ll mxb = b[b.size() - 1];
	ll mdb = b[1];
	ll mnb = b[0];
	ll res = mxa * mxb + mda * mdb + mna * mnb;
	cout << res;
}