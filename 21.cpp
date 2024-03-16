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
	ll s1, s2, s3;
	cin >> s1 >> s2 >> s3;

	int mn = min(s1, min(s2, s3));
	int mx = max(s1, max(s2, s3));
	cout << mx - mn;
}


