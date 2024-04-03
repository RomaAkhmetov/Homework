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

	vector <char> p;
	for (ull i = 0; i < s.size(); i++)
	{
		if (s[i] == '0')
			p.push_back(s[i]);
		else if (s[i] == '1')
			p.push_back('.');
	}
	ull pl1 = 0;
	vector <ull> p2;
	for (ull j = p.size() - 1; j > 0; j--)
	{
		if (p[j] == '0')
		{
			pl1++;
		}
		else if (p[j] == '.')
		{
			p2.push_back(pl1);
			pl1 = 0;
		}
	}
	ull mx = 0;
	for (ull i = 0; i < p2.size(); i++)
	{
		if (p2[i] > mx)
			mx = p2[i];
	}
	cout << mx;
}