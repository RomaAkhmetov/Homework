#define _CRT_SECURE_NO_WARNINGS
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
using namespace std;

typedef long long ll;
typedef unsigned long long ull;


int main()
{
	int n, m;
	cin >> n >> m;

	int mn = min(m, n);
	int mx = max(m, n);
	int d1 = 0;
	for (int i = 1; i <= mn; i++)
	{
		if (mn % i == 0)
		{
			if (mx % i == 0)
				d1 = i;
		}
	}

	cout << d1;
}

/* 
Тут +- стандартная реализация НОД, нужно разобрать, как она работает на разных тестах.
Вы написали наивную реализацию, это отлично.
short gcd(short a, short b) {
    while (b != 0) {
        a %= b;
        swap(a, b);
    }

    return a;
}

сейчас для теста
3 6
то есть 3 единицы - 111, и 6 единиц - 111111
Вы возвращаете НОД == 3, это не верно, должно быть 111.
*/
