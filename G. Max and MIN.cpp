#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

void MinMax(int arr[], int n)
{
	sort(arr, arr + n);

	cout<<arr[0]<<" "<< arr[n - 1];
}

int main()
{
	int n, arr[1000];

	cin >> n;
	
for (int i = 0; i < n; i++)
{
  cin >> arr[i];
}
	
	 MinMax(arr, n);
}
