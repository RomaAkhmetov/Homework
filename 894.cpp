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
	double S, r1;
	cin >> S >> r1;
	
	double z_r2 = sqrt((M_PI * pow(r1, 2) - S) / M_PI);
	cout << round(z_r2 * 1000.0) / 1000.0;
}
