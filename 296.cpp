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

    
    for (ll i = n / 5; i >= 0; i--)
    {
        ll ost = n - i * 5;
        if (ost % 3 == 0)
        {
            cout << i << ' ' << ost / 3;
            return 0;
        }
    }
}

//Z
