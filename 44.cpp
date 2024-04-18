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
	
	ull cnt = 0;
	for (ull i = 0; i < s.size(); i++)
	{
		if (s[i] == '>' && s[i + 1] == '>' && s[i + 2] == '-' && s[i + 3] == '-' && s[i + 4] == '>')
			cnt++;
		else if (s[i] == '<' && s[i + 1] == '-' && s[i + 2] == '-' && s[i + 3] == '<' && s[i + 4] == '<')
			cnt++;
	}
	cout << cnt;
}

//Z