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

bool Is_sign_letter(char sign, vector <char> &a)
{
	if (find(a.begin(), a.end(), sign) != a.end())
		return true;
	else
		return false;
}

bool Is_sign_number(char sign)
{
	if (isdigit(sign))
		return true;
	else
		return false;
}

int main()
{
	int n;
	cin >> n;

	vector <char> a = { 'A', 'B', 'C', 'E', 'H', 'K', 'M', 'O', 'P', 'T', 'X', 'Y' };

	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;

		if (Is_sign_letter(s[0], a)
			&& Is_sign_number(s[1])
			&& Is_sign_number(s[2])
			&& Is_sign_number(s[3])
			&& Is_sign_letter(s[4], a)
			&& Is_sign_letter(s[5], a))
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}
}