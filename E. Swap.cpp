
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

void Swap(int& n1, int& n2)
{
	int temp;
	temp = n1;
	n1 = n2;
	n2 = temp;
}

int main()
{
	int n1, n2;

	cin >> n1 >> n2;

	Swap(n1, n2);

	cout << n1 << " " << n2;

}
