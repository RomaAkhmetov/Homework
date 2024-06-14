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

char ctoi(char a)
{
	return a - '0';
}

int main()
{
	string s;
	getline(cin, s);

	ll k = 0;
	string sum = "";
	for (ll i = 0; i < s.size(); i++)
	{
		if (s[i] != '!' && s[i] != ' ')
			sum += to_string(ctoi(s[i]));
		else if (s[i] == '!')
			k++;
	}
	ll s_u = stoi(sum);
	ll res = 1;
	while (s_u >= 1)
	{
		res *= s_u;
		s_u -= k;
	}
	cout << res;
}