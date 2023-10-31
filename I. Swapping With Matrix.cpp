#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

void SwapRaw(long long arr[500][500], int x, int y, int n) 
{
	for (int i = 0; i < n; i++)
	{
		int temp = arr[x][i]; 

		arr[x][i] = arr[y][i];
		arr[y][i] = temp; 
	}
}

void SwapColumn(long long arr[500][500], int x, int y, int n) 
{
	for (int i = 0; i <n ; i++) 
	{
		int temp = arr[i][x]; 

		arr[i][x] = arr[i][y]; 
		arr[i][y] = temp; 
	}
}

int main()
{
	int n, x, y;

	cin >> n >> x >> y;

	long long arr[500][500];

	for (int i = 0; i < n; i++)
	{
		for (int z = 0; z < n; z++)
		{
			cin >> arr[i][z];
		}
	}

	x--;
	y--;

	SwapRaw(arr, x, y, n);
	SwapColumn(arr, x, y, n);

	for (int i = 0; i < n; i++)
	{
		for (int z = 0; z < n; z++)
		{
			cout<< arr[i][z]<<" ";
		}
		cout << endl;
	}

	return 0;
}
