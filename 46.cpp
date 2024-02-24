#define _CRT_SECURE_NO_WARNINGS
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
	int n;
	cin >> n;

	string e = "27182818284590452353602875";
	n++;
	int in_mind = 0;
	while(e.size() > n)
	{
		string predstr = e.substr(e.size() - 2, 1);
		int pred = stoi(predstr);
		string nextstr = e.substr(e.size() - 1, 1);
		int next = stoi(nextstr);

		if (next > 4)
		{
			pred += 1 + in_mind;	
		}
		else
		{
			pred += in_mind;
		}

		in_mind = 0;

		if (pred > 9)
		{
			pred = 0;
			in_mind++;
		}

		string s = to_string(pred);
		e[e.size() - 2] = s[0];

		e.erase(e.size() - 1, 1);
	}
	if (n > 1)
		e.insert(1, 1, '.');

	cout << e;
}