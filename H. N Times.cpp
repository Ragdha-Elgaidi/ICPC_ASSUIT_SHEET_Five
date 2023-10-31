#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

void NTimes(int n, char c)
{
	for (int i = 0; i < n; i++)
	{
		cout << c <<" ";
	}
}

int main()
{
	int t, n; char c;

	cin >> t;

	while (t--)
	{
		cin >> n >> c;

		NTimes(n, c);
		cout << endl;
	}
	
	return 0;
}
