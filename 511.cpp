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
	ll k;
	cin >> k;

	ll new_k = (((k - 1) * 10) / 2) / 60;
	ll ost_new_k = (((k - 1) * 10) / 2) % 60;
	if (new_k + 8 > 20)
	{
		if (new_k + 8 == 20 && ost_new_k > 0)
			cout << "NO";
		else if (new_k + 8 > 20)
			cout << "NO";
		else
		{
			cout << new_k << ' ' << ost_new_k;
			return 0;
		}
	}
	else
		cout << new_k << ' ' << ost_new_k;
}

//Z