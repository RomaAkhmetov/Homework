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
	int n, m, k;
	cin >> n >> m >> k;

	if(n < m && n <= k)
		cout << "NO";
	else
	{
		int cnt = 0;
		while (m > 0)
		{
			if (m > 0)
			{
				m = m - n;
				cnt++;
				if (m <= 0) {
					cout << cnt;
					return 0;
				}
				else
					m += k;
			}
		}
		cout << cnt;
	}
}
//Хорошо. Нужно решение без цикла.
