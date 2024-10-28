#define _USE_MATH_DEFINES_
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

ll conversionTotwo(ll p)
{
    ll steps = 0;
    while (p > 2)
    {
        if (p % 2 == 0)
        {
            p /= 2;
            steps++;
        }
        else if (p % 2 != 0)
        {
            p = p * 3 + 1;
            steps++;
        }
    }
    return steps;
}

int main()
{
    ll p, k;
    cin >> p >> k;

    vector<ll> a;
    for (ll i = p; i <= k; i++)
        a.push_back(i);

    ll cnt = 0;
    for (ll j = 0; j < a.size(); j++)
    {
        if (a[j] == 2)
            continue;
        else
            cnt += conversionTotwo(a[j]);
    }
    cout << cnt;
}

//Z