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

	vector <int> a = { 1, 2, 3 };
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'A')
			swap(a[0], a[1]);
		else if (s[i] == 'B')
			swap(a[1], a[2]);
		else if (s[i] == 'C')
			swap(a[0], a[2]);
	}
	int res = 0;
	for (int j = 0; j <= a.size(); j++)
	{
		if (a[j] == 1)
		{
			res = j + 1;
			break;
		}
	}
	cout << res;
}





