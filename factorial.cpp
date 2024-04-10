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

ll Problem_of_Factorial(ll z)
{
	if (z == 0 || z == 1)
		return 1;
	return z * Problem_of_Factorial(z - 1);
}

int main()
{
	ll z;
	cin >> z;

	cout << Problem_of_Factorial(z);
}