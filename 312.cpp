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
	double a1, a2, n;
	cin >> a1 >> a2 >> n;

	double d = a2 - a1;
	double an = a1 + d * (n - 1);
	cout << an;
}
