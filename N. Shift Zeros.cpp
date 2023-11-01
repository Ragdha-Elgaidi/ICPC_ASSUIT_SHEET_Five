#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

void ShiftingZeros(int arr[1000], int n)
{
	int counter = 0;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] == 0)
		{
			counter++;
		}
		else
		{
			cout << arr[i] << " ";
		}
	}
	for (int i = 0; i < counter; i++) 
	{
		cout << 0<<" ";
	}
}


int main()
{
	int n, arr[1000];

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	ShiftingZeros(arr, n);
}
