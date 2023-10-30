#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int sum(int x, int y)
{
	int z = x + y;
	return z;
}
int main()
{
	int x, y;
	cin >> x >> y;
	cout<<sum(x, y);
}

