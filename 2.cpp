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
	ll n;
	cin >> n;

	ll a1 = 1;
	ll an = n;
	ll Sn = ((a1 + abs(an)) * abs(n)) / 2;
	if (n < 0)
		cout << (Sn * -1) + 1;
	else if (n == 0)
		cout << 1;
	else
		cout << Sn;
}                         