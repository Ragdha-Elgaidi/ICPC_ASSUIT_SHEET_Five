
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;


bool Prime(int n)
{
	int m =sqrt(n);

	for (int i = 2; i <= m; i++)
	{
		if ((n % i) == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int t, n;

	cin >> t;

	while (t--)
	{
		cin >> n;

		if (n == 1) 
		{
			cout << "NO" << endl;
			continue;
		}

		bool prime = Prime(n);

		if (prime == true)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
}
