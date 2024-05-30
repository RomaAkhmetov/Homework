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
	cin >> s;

	vector <string> v;
	vector <string> nu;
	vector <string> for_x;
	for (ll i = 0; i < s.size(); i++)
	{
		if (s[i] == '=')
			v.push_back(to_string(s[i]));
		else
		{
			if (s[i] == 'x' && i == 0)
				for_x.push_back("1");
			else if (s[i + 1] == 'x' && s[i] == '+')
				for_x.push_back("1");
			else if (s[i + 1] == 'x' && s[i] == '-')
				for_x.push_back("-1");
			else if (s[i + 1] == 'x' && (s[i] != 'x' && s[i] != '+' && s[i] != '-' && s[i] != '=') && i == 0)
				for_x.push_back(to_string(s[i]));
			else if (s[i + 1] == 'x' && (s[i] != 'x' && s[i] != '+' && s[i] != '-' && s[i] != '=') && s[i - 1] == '+')
				for_x.push_back(to_string(s[i]));
			else if (s[i + 1] == 'x' && (s[i] != 'x' && s[i] != '+' && s[i] != '-' && s[i] != '=') && s[i - 1] == '-')
			{
				for_x.push_back("-");
				for_x.push_back(to_string(s[i]));
			}
			else if (s[i] != '+' && s[i] != '-' && s[i] != '=' && s[i] != 'x' && i == 0)
			{
				v.push_back("-");
				v.push_back(to_string(s[i]));
			}
			else if (s[i + 1] != '+' && s[i + 1] != '-' && s[i + 1] != '=' && s[i + 1] == 'x' && s[i] == '-' && i == 0)
			{
				v.push_back("+");
				v.push_back(to_string(s[i + 1]));
			}
			else if (s[i] != 'x' && s[i] != '+' && s[i] != '-' && s[i] != '=' && i == s.size() - 1)
			{
				v.push_back(to_string(s[i]));
				break;
			}
			else if (s[i] != 'x' && (s[i + 1] != 'x' && s[i + 1] != '+' && s[i + 1] != '-' && s[i + 1] != '=') && s[i] == '-')
			{
				v.push_back("+");
				v.push_back(to_string(s[i + 1]));
			}
			else if (s[i] != 'x' && (s[i + 1] != 'x' && s[i + 1] != '+' && s[i + 1] != '-' && s[i + 1] != '=') && s[i] == '+')
			{
				v.push_back("-");
				v.push_back(to_string(s[i + 1]));
			}
			else if (s[i] != 'x' && s[i] != '+' && s[i] != '-' && s[i] != '=' && (s[i - 1] != 'x' && s[i - 1] != '+' && s[i - 1] != '-' && s[i - 1] != '=') && v.size() != 0)
			{
				v[v.size() - 1] += to_string(s[i]);
			}
			else if (s[i] != 'x' && s[i] != '+' && s[i] != '-' && s[i] != '=' && v.size() == 0)
			{
				v.push_back("-");
				v.push_back(to_string(s[i]));
			}
		}
	}
	string sum = "";
	string sum1 = "";
	for (ll j = 0; j < v.size(); j++)
	{
		if (v[j] != "61")
			sum += v[j];
		else
		{
			for (ll h = j + 1; h < v.size(); h++)
				sum1 += v[h];
			break;
		}
	}
	string sum_x = "";
	for (ll u = 0; u < for_x.size(); u++)
	{
		sum_x += for_x[u];
	}
	cout << (stoi(sum) + stoi(sum1)) / stoi(sum_x);
}

//Z