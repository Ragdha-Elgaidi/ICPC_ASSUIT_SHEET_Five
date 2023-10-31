#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

double Sum(int n)
{
	double sum = 0;

	for (int i = 0; i < n; i++)
	{
		double value;

		cin >> value;

		sum += value;
	}

	return sum;
}

int main()
{
	int n;

	cin >> n;
	cout << setprecision(7) << Sum(n) / n << endl;

	return 0;
}
