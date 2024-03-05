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
	int x, y, z;
	cin >> x >> y >> z;

	int sum = x + y;
	if (sum >= z)
		cout << sum - z;
	else
		cout << "Impossible";
}