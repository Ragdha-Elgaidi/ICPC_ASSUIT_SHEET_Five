
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

const int s = 10001;

int main()
{
	int n, x, arr[s];

	cin >> n >> x;

	int sh = x % n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = n - sh; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	for (int i = 0; i < n - sh; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}
