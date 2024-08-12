#define _USE_MATH_DEFINES_
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


int main()
{
	string Team;
	getline(cin, Team);

	vector<string>v(3);
	for (ll i = 0; i < 3; i++)
		getline(cin,v[i]);

	sort(v.begin(), v.end());

	cout << Team << ':' << ' ' << v[0] << ',' << ' ' << v[1] << ',' << ' ' << v[2];

}

//Z