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
    ll n, v, k;
    cin >> n >> v >> k;

    ll an = v + (k * -1 * (n - 1));
    if (an < 0)
    {
        ll p = ceil(((double)(an * -1)) / (double)k);
        ll new_n = n - p;
        ll new_an = v + (k * -1 * (new_n - 1));
        ll Sn = ((v + new_an) * new_n) / 2;
        cout << "NO" << ' ' << Sn;
    }
    else
    {
        ll Sn1 = ((v + an) * n) / 2;
        cout << "YES" << ' ' << Sn1;
    }
}

//Z