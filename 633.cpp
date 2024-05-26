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
#include <unordered_map>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
 

int main()
{
	string s;
	getline(cin, s);

	string s1;
	cin >> s1;

	string s2;
	cin >> s2;

	string s3;
	cin >> s3;

	vector <string> v;
	v.push_back(s1);
	v.push_back(s2);
	v.push_back(s3);
	sort(v.begin(), v.end());
	cout << s << ':' << ' ' << v[0] << ',' << ' ' << v[1] << ',' << ' ' << v[2];
}

//Z