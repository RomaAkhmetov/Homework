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

bool has_number_got_two_digits(ll a)
{
    string new_a = to_string(a);
    sort(new_a.begin(), new_a.end());
    vector<bool> pometka;
    for (ll p = 1; p <= new_a.size(); p++)
    {
        if (new_a[p - 1] == new_a[p])
        {
            pometka.push_back(false);
            break;
        }
    }
    if (pometka.size() > 0)
        return false;
    else
        return true;
}

int main()
{
    ll n;
    cin >> n;

    vector<ll> v;
    for (ll i = 1; i <= 26057; i++)
        v.push_back(i);
    vector<ll> res;
    for (ll j = 0; j < v.size(); j++)
        if (has_number_got_two_digits(v[j]) == true)
            res.push_back(v[j]);
    cout << res[n - 1];
}

//Z