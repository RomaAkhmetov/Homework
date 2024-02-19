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
	if (sign == 'A')
		return 1;
	else if (sign == 'B')
		return 2;
	else if (sign == 'C')
		return 3;
	else if (sign == 'D')
		return 4;
	else if (sign == 'E')
		return 5;
	else if (sign == 'F')
		return 6;
	else if (sign == 'G')
		return 7;
	else if (sign == 'H')
		return 8;
	else
		return -1;

}

int ctoi(char c)
{
	return (c - '0');
}

bool check(int x1, int y1, int x2, int y2)
{
	if ((abs(x1 - x2) == 2 && abs(y1 - y2) == 1) || (abs(x1 - x2) == 1 && abs(y1 - y2) == 2))
		return true;
	else
		return false;
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

	}

	if (check(x1, y1, x2, y2) == true)
		cout << "YES";
	else
		cout << "NO";
}
