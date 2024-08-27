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
#include <unordered_set>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

set<char> solution1(const string &a)
{
    set<char> st;
    for (auto ch : a)
        st.insert(ch);
    return st;
}

unordered_set<char> solution2(const string &a)
{
    unordered_set<char> st;
    for (auto ch : a)
        st.insert(ch);
    return st;
}

vector<bool> solution3(const string &a)
{
    vector <bool> v(10, false);
    for (auto ch : a)
        v[ch - '0'] = true;
    return v;
}

string solution4(string a)
{
    sort(a.begin(), a.end());
    auto last = unique(a.begin(), a.end());
    // v now holds {1 2 3 4 5 x x}, where 'x' is indeterminate
    a.erase(last, a.end());
    return a;
}
int main()
{
    ll k;
    cin >> k;

    for (ll i = 0; i < k; i++)
    {
        string a, b;
        cin >> a >> b;

        //if (get_digits(a) == get_digits(b))
        if (solution4(a) == solution4(b))
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
}

//Z