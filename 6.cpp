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

int sign_to_num(char sign)
{
	int num = sign - 'A' + 1;

	if (1 <= num && num <= 8)
		return num;
	else
		return -1;
}

int ctoi(char c)
{
	return (c - '0');
}

bool check(int x1, int y1, int x2, int y2)
{
	int dx = x1 - x2;
	int dy = y1 - y2;
	return dx * dx + dy * dy == 5;
}

int main()
{
	string s;
	cin >> s;

	if (s.size() != 5)
	{
		cout << "ERROR";
		return 0;
	}

	int x1 = sign_to_num(s[0]);
	if (x1 == -1)
	{
		cout << "ERROR";
		return 0;
	}

	int y1 = ctoi(s[1]);

	if (y1 > 8 || y1 < 1)
	{
		cout << "ERROR";
		return 0;
	}

	if (s[2] != '-')
	{
		cout << "ERROR";
		return 0;
	}

	int x2 = sign_to_num(s[3]);
	if (x2 == -1)
	{
		cout << "ERROR";
		return 0;
	}

	int y2 = ctoi(s[4]);

	if (y2 > 8 || y2 < 1)
	{
		cout << "ERROR";
		return 0;
	}

	if (check(x1, y1, x2, y2) == true)
		cout << "YES";
	else
		cout << "NO";
}
