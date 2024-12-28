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
#include <stack>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

char ctoi(char a) {
	return a - '0';
}

vector<ull> sum(string n) {
	if (n.size() == 1) {
		vector<ull> l = { stoull(n), 0 };
		return l;
	}

	ull sum = 0;
	string s = n;
	ull cnt = 0;
	while (s.size() != 1) {
		for (ll i = 0; i < s.size(); i++) 
			sum += ctoi(s[i]);

		s = to_string(sum);
		cnt++;
		sum = 0;
	}
	sum = stoi(s);
	vector<ull> a = { sum, cnt };
	return a;
}
int main()
{
	string n;
	cin >> n;

	vector<ull> res = sum(n);
	for (ll p = 0; p < res.size(); p++)
		cout << res[p] << ' ';
}
//Z