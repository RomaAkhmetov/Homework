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
    ll k;
    cin >> k;

    for (ll i = 0; i < k; i++)
    {
        ll a, b;
        cin >> a >> b;

        string n_a = to_string(a);
        string n_b = to_string(b);
        char c = -1;
        char c1 = -1;
        char c2 = -1;
        char c3 = -1;
        char c4 = -1;
        char c5 = -1;
        char c6 = -1;
        char c7 = -1;
        char c8 = -1;
        char c9 = -1;
        vector<bool> v = {false, false, false, false, false, false, false, false, false, false};
        for (ll o = 0; o < n_a.size(); o++)
        {
            if (n_a[o] == '0' && c != n_a[o])
            {
                c = '0';
                v[0] = true;
            }
            else if (n_a[o] == '1' && c1 != n_a[o])
            {
                c1 = '1';
                v[1] = true;
            }
            else if (n_a[o] == '2' && c2 != n_a[o])
            {
                c2 = '2';
                v[2] = true;
            }
            else if (n_a[o] == '3' && c3 != n_a[o])
            {
                c3 = '3';
                v[3] = true;
            }
            else if (n_a[o] == '4' && c4 != n_a[o])
            {
                c4 = '4';
                v[4] = true;
            }
            else if (n_a[o] == '5' && c5 != n_a[o])
            {
                c5 = '5';
                v[5] = true;
            }
            else if (n_a[o] == '6' && c6 != n_a[o])
            {
                c6 = '6';
                v[6] = true;
            }
            else if (n_a[o] == '7' && c7 != n_a[o])
            {
                c7 = '7';
                v[7] = true;
            }
            else if (n_a[o] == '8' && c8 != n_a[o])
            {
                c8 = '8';
                v[8] = true;
            }
            else if (n_a[o] == '9' && c9 != n_a[o])
            {
                c9 = '9';
                v[9] = true;
            }
        }
        vector<bool> v1 = { false, false, false, false, false, false, false, false, false, false };
        char nc = -1;
        char nc1 = -1;
        char nc2 = -1;
        char nc3 = -1;
        char nc4 = -1;
        char nc5 = -1;
        char nc6 = -1;
        char nc7 = -1;
        char nc8 = -1;
        char nc9 = -1;
        for (ll j = 0; j < n_b.size(); j++)
        {
            if (n_b[j] == '0' && nc != n_b[j])
            {
                nc = '0';
                v1[0] = true;
            }
            else if (n_b[j] == '1' && nc1 != n_b[j])
            {
                nc1 = '1';
                v1[1] = true;
            }
            else if (n_b[j] == '2' && nc2 != n_b[j])
            {
                nc2 = '2';
                v1[2] = true;
            }
            else if (n_b[j] == '3' && nc3 != n_b[j])
            {
                nc3 = '3';
                v1[3] = true;
            }
            else if (n_b[j] == '4' && nc4 != n_b[j])
            {
                nc4 = '4';
                v1[4] = true;
            }
            else if (n_b[j] == '5' && nc5 != n_b[j])
            {
                nc5 = '5';
                v1[5] = true;
            }
            else if (n_b[j] == '6' && nc6 != n_b[j])
            {
                nc6 = '6';
                v1[6] = true;
            }
            else if (n_b[j] == '7' && nc7 != n_b[j])
            {
                nc7 = '7';
                v1[7] = true;
            }
            else if (n_b[j] == '8' && nc8 != n_b[j])
            {
                nc8 = '8';
                v1[8] = true;
            }
            else if (n_b[j] == '9' && nc9 != n_b[j])
            {
                nc9 = '9';
                v1[9] = true;
            }
        }
        if (v == v1)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
}
