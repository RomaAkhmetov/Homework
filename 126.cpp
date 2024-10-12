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



int main()
{
    ll n;
    cin >> n;

    vector<vector<ll>> v;
    for (ll u = 0; u < n; u++)
    {
        vector<ll> c(n);
        for(ll p = 0; p < n; p++)
        {
            ll timp;
            cin >> timp;

            c[p] = timp;
        }
        v.push_back(c);
    }

    ull min = 1e10;
    vector<ll> saved_items;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            if (j == i)
                continue;

            for (ll g = 0; g < n; g++)
            {
                if (g == i || g == j)
                    continue;

                saved_items.push_back(v[i][j]);
                saved_items.push_back(v[j][g]);
                saved_items.push_back(v[g][i]);

                ll sum = 0;
                for (ll h = 0; h < saved_items.size(); h++)
                    sum += saved_items[h];
                if (min > sum)
                    min = sum;

                saved_items = {};
            }
        }
    }
    cout << min;
}

//Z