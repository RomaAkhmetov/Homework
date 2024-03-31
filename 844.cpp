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
	ull a, b;
	cin >> a >> b;

	ull z = a * b;
	double res = sqrt(z);
	double res2 = (int)res;
	double res3 = abs(res - res2);
	if (res3 > 0)
		cout << 0;
	else
		cout << (int)res;
}


