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

char ctoi(char b)
{
    return b - '0';
}

ll search_letters_and_numbers(char a)
{
    if (48 <= a && a <= 57)
        return ctoi(a);
    vector<char> v = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
    ll l = -1;
    ll r = 25;
    while (l + 1 < r)
    {
        ll m = (l + r) / 2;
        if (v[m] < a)
            l = m;
        else
            r = m;
    }
    return r + 10;
}

int main()
{
    ll n;
    cin >> n;

    string k;
    cin >> k;

    ll p = n % 10 + 2;
    ll stepen = 0;
    ll res = 0;
    for (ll i = k.size() - 1; i >= 0; i--)
    {
        res += pow(p, stepen) * search_letters_and_numbers(k[i]);
        stepen++;
    }
    cout << res;
}
