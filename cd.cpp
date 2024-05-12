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
	ll t;
	cin >> t;

	
	for (ll i = 0; i < t; i++)
	{
		vector <char> v;

		string s;
		cin >> s;

		char c = ' ';
		ll p1 = 0;
		for (ll j = 0; j < s.size(); j++)
		{

			char tmp = s[j];
			if (tmp != c)
			{
				if (tmp == '1' && c == '0')
					p1 = -1;
				v.push_back(tmp);
				c = tmp;
			}
		}
		cout << v.size() + p1 << "\n";
	}
}

//Z