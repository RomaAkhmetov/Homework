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

char ctoi(char a)
{
    return a - '0';
}

ll Min(ll n)
{
    if (n > 0)
    {
        string g = to_string(n);
        string res = "";
        char min = 58;
        for (ll i = 0; i < g.size(); i++)
        {
            if (g[i] < min && g[i] != '0')
                min = g[i];
        }
        res += to_string(ctoi(min));
        for (ll d = 0; d < g.size(); d++)
        {
            if (min == g[d])
            {
                g.erase(g.begin() + d);
                break;
            }
        }
        sort(g.begin(), g.end());
        res += g;
        return stoll(res);
    }
    else
    {
        string h = to_string((n * -1));
        string r = "";
        char m = -1;
        for (ll j = 0; j < h.size(); j++)
        {
            if (h[j] > m)
                m = h[j];
        }
        r += m;
        for (ll t = 0; t < h.size(); t++)
        {
            if (h[t] == m)
            {
                h.erase(h.begin() + t);
                break;
            }
        }
        sort(h.begin(), h.end());
        for (ll l = h.size() - 1; l >= 0; l--)
            r += to_string(ctoi(h[l]));
        return stoll(r) * -1;
    }
}

ll Max(ll n)
{
    if (n > 0)
    {
        string u = to_string(n);
        string z = "";
        char max = -1;
        for (ll i = 0; i < u.size(); i++)
        {
            if (u[i] > max)
                max = u[i];
        }
        z += max;
        for (ll p = 0; p < u.size(); p++)
        {
            if (u[p] == max)
            {
                u.erase(u.begin() + p);
                break;
            }
        }
        sort(u.begin(), u.end());
        for (ll j = u.size() - 1; j >= 0; j--)
            z += to_string(ctoi(u[j]));
        return stoll(z);
    }
    else
    {
        string k = to_string((n * -1));
        string f = "";
        char mi = -1;
        for (ll o = 0; o < k.size(); o++)
        {
            if (k[o] < mi && k[o] != '0')
                mi = k[o];
        }
        f += to_string(ctoi(mi));
        for (ll b = 0; b < k.size(); b++)
        {
            if (k[b] == mi)
            {
                k.erase(k.begin() + b);
                break;
            }
        }
        sort(k.begin(), k.end());
        f += k;
        return stoll(f) * -1;
    }
}

int main()
{
    ll n;
    cin >> n;

    cout << Min(n) << ' ' << Max(n);
}

//Z