#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

long long SumOfPower(int n, int p)
{
	long long s = 0;

	for (int i = 2; i <= p; i += 2)
	{
			s += pow(n, i);
	}

	return s;
}

int main()
{
	int n, p;

	cin >> n >> p;

	cout << SumOfPower(n, p) << endl;

}
