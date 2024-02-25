//Хорошо. Можно еще хранить в векторе сразу количество секнуд. Тогда не понадобился бы свой компаратор. Еще можно было вместо структуры взять вектор. 
//Для вектора определен оператор <, тоже можно было отсортировать без компаратора.
//Поправил:
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
	int n;
	cin >> n;

	vector <int> a(n);
	for (int i = 0; i < n; i++)
	{
		int h, m, s;
		cin >> h >> m >> s;

		a[i] = h * 3600 + m * 60 + s;
	}

	sort(a.begin(), a.end());

	for (int i = 0; i < a.size(); i++)
	{
		int h = a[i] / 3600;
		int m = (a[i] - h * 3600) / 60;
		int s = a[i] - h * 3600 - m * 60;
		cout << h << ' ' << m << ' ' << s << endl;
		
		//Отлично! Как вариат можно было так написать
		//cout << a[i] / 3600 << ' ' << a[i] % 3600 / 60 << ' ' << a[i] % 3600 % 60 << endl;

	}
}
