
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

void Distinct(int arr[1000], int n)
{
	
	sort(arr, arr + n);

	int counter = 1;

	for (int i = 1; i < n; i++)
	{
		if (arr[i] != arr[i - 1])
		{
			counter++;
		}
	}

	cout << counter;
}

int main()
{
	int n, arr[1000];

	cin >> n;

	if (n == 0)
	{
		cout << 0;
		return 0;
	}
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	Distinct(arr, n);
}
