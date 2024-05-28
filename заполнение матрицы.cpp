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
	ll cnt_el;
	cin >> cnt_el;

	vector <ll>a(cnt_el, 0);
	for (auto &el : a)
	{
		cin >> el;
	}

	ll c_row;
	ll c_column;
	cin >> c_row >> c_column;

	vector<vector<int>> m_or_f(10, vector <int> (20, -1));
	vector<vector<int>> m_or_f1(c_row, vector <int> (c_column, -1));
	for (auto& row : m_or_f1)
		for (auto& el : row)
			cin >> el;


}

//Z