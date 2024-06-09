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
	vector <vector <char>> a;
	for (ll p = 0; p < 4; p++)
	{
		vector <char> c;
		for (ll i = 0; i < 4; i++)
		{
			char tmp;
			cin >> tmp;

			c.push_back(tmp);
		}
		a.push_back(c);
	}
	ll ind_x = 1;
	ll ind_y = 1;
	for (ll i = 0; i < 4; i++)
	{
		for (ll j = 0; j < 4; j++)
		{
			if (a[ind_x - 1][ind_y - 1] == a[ind_x][ind_y - 1]
				&& a[ind_x - 1][ind_y - 1] == a[ind_x - 1][ind_y]
				&& a[ind_x - 1][ind_y - 1] == a[ind_x][ind_y]
				&& a[ind_x][ind_y - 1] == a[ind_x - 1][ind_y]
				&& a[ind_x][ind_y - 1] == a[ind_x][ind_y] && a[ind_x - 1][ind_y] == a[ind_x][ind_y])
			{
				cout << "No";
				return 0;
			}
			else
			{
				if (ind_x == 3)
				{
					ind_y++;
					if (ind_y > 3)
						break;
					else
						ind_x = 1;
				}
				else
					ind_x++;
			}
		}
	}
	cout << "Yes";
}

//Z