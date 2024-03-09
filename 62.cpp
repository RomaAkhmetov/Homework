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

int sign_to_number(char sign)
{
	return sign - 'A' + 1;
}

int ctoi(char c)
{
	return c - '0';
}
int main()
{
	string s;
	cin >> s;

	int x = sign_to_number(s[0]);
	int y = ctoi(s[1]);

	if ((x + y) % 2 == 0)
		cout << "BLACK";
	else
		cout << "WHITE";
}