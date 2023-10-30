
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int num;
	cin >> num; 

	if (num % 2 == 0)
	{  
		cout << "NO" << endl;
		return 0;
	}

	int index = 0;
	int bi[100];


	while (num != 0)
	{
		bi[index] = num % 2;
		num /= 2; 
		index++; 
	}

	for (int i = 0, z = index - 1; i < index, z >= 0; i++, z--)
    {
		if (bi[i] != bi[z]) 
    {
			cout << "NO" << endl;
			return 0;
		}
	}

	cout << "YES" << endl;
}
