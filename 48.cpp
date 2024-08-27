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
    string n;
    cin >> n;

    if (n[n.size() - 1] == '0')
    {
        string res = "1";
        ll i = n.size() - 1;
        while (n[i] == '0')
        {
            res += n[i];
            i--;
        }
        cout << res;
    }
    else
        cout << 1;
}
