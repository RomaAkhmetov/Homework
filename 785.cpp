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

bool is_automorphic(ll index)
{
    string sqr = to_string(index * index);
    string n_i = to_string(index);
    vector <char> e;
    for (ll o = n_i.size() - 1; o >= 0; o--)
        e.push_back(n_i[o]);
    vector<char> c;
    ll sign_index = sqr.size() - 1;
    ll iteration_number = 0;
    while (iteration_number < n_i.size())
    {
        c.push_back(sqr[sign_index]);
        iteration_number++;
        sign_index--;
    }
    if (c == e)
        return true;
    else
        return false;
}


int main()
{
    ll a, b;
    cin >> a >> b;

    vector <ll> v;
    for (ll i = a; i <= b; i++)
    {
        if (is_automorphic(i) == true)
            v.push_back(i);
    }
    for (ll j = 0; j < v.size(); j++)
        cout << v[j] << ' ';
}
