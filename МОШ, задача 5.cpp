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

char vec(char &c)
{
	if (c == '<')
		return '>';
	else if (c == '>')
		return '<';
}

int main()
{
	ll n;
 	cin >> n;

	string s;
	cin >> s;

	ll cnt = 0;
	ll ans = 0;

	while (true) {
		for (ll i = 0; i < s.size() - 1; i++) {
			if (s[i] == '>' && s[i + 1] == '<') {
				cnt += 1;
				ans++;
				s[i] = '<';
				s[i + 1] = '>';
			}
		}

		if (ans == 0)
			break;

		ans = 0;
	}

	cout << cnt;
}
//Z