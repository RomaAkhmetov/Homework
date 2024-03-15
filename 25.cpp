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
	ll a, b;
	cin >> a >> b;

	if (b > a)
		cout << '<';
	else if (a > b)
		cout << '>';
	else if (a == b)
		cout << '=';
}                         