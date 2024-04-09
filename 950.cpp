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
	string s;
	cin >> s;

	vector <char> e;
	for (ll i = 0; i <= s.size(); i++)
	{
		if (i == s.size())
			break;
		else
		{
			if (s[i] == '1' && s[i + 1] == '0')
			{
				e.push_back(s[i]);
				e.push_back('.');
			}
			else if (s[i] == '0' && s[i + 1] == '1')
			{
				e.push_back(s[i]);
				e.push_back(s[i + 1]);
				e.push_back('.');
				i += 1;
			}
			else if (s[i] == '0' && s[i + 1] != '1')
				e.push_back(s[i]);
		}
	}
	string cnt;
	vector <string> r;

	for (ll c = 0; c < e.size(); c++)
	{
		
		if (e[c] != '.')
		{
			if (e[c] == '1')
			{
				cnt += e[c];
				r.push_back(cnt);
				cnt = "";
			}
			else if (e[c] == '0' && e[c + 1] == '1')
			{
				char a = e[c];
				char b = e[c + 1];
				string sum = string{ a } + string{ b };
				cnt += sum;
				r.push_back(cnt);
				cnt = "";
				c += 1;
			}
			else if (e[c] == '0' && e[c + 1] != '1')
			{
				char c1 = e[c];
				char d = e[c + 1];
				string sum1 = string{ c1 } + string{ d };
				cnt += sum1;
				c += 1;
			}
		}
	}
	string cntr;
	for (ll p = 0; p < r.size(); p++)
	{
		if (r[p] == "1")
			cntr += 'a';
		else if (r[p] == "01")
			cntr += 'b';
		else if (r[p] == "001")
			cntr += 'c';
		else if (r[p] == "0001")
			cntr += 'd';
		else if (r[p] == "00001")
			cntr += 'e';
		else if (r[p] == "000001")
			cntr += 'f';
		else if (r[p] == "0000001")
			cntr += 'g';
		else if (r[p] == "00000001")
			cntr += 'h';
		else if (r[p] == "000000001")
			cntr += 'i';
		else if (r[p] == "0000000001")
			cntr += 'j';
		else if (r[p] == "00000000001")
			cntr += 'k';
		else if (r[p] == "000000000001")
			cntr += 'l';
		else if (r[p] == "0000000000001")
			cntr += 'm';
		else if (r[p] == "00000000000001")
			cntr += 'n';
		else if (r[p] == "000000000000001")
			cntr += 'o';
		else if (r[p] == "0000000000000001")
			cntr += 'p';
		else if (r[p] == "00000000000000001")
			cntr += 'q';
		else if (r[p] == "000000000000000001")
			cntr += 'r';
		else if (r[p] == "0000000000000000001")
			cntr += 's';
		else if (r[p] == "00000000000000000001")
			cntr += 't';
		else if (r[p] == "000000000000000000001")
			cntr += 'u';
		else if (r[p] == "0000000000000000000001")
			cntr += 'v';
		else if (r[p] == "00000000000000000000001")
			cntr += 'w';
		else if (r[p] == "000000000000000000000001")
			cntr += 'x';
		else if (r[p] == "0000000000000000000000001")
			cntr += 'y';
		else if (r[p] == "00000000000000000000000001")
			cntr += 'z';
	}
	cout << cntr;
}