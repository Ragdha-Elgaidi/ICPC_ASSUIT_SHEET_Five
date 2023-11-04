#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

int countDivisor(int num)
{
	int m = num / 2;
	int counter = 0;

	for (int z = 1; z <= m; z++)
	{
		if (num % z == 0) 
		{
			counter++;
		}
	}
	return counter;
}

bool palindrome(int num)
{  
	int temp = num;
	int sum = 0; 
	int d;

	while (num > 0) 
	{
		d = num % 10; 
		sum = (sum * 10) + d; 
		num /= 10; 
	}

	if (temp == sum) 
	{
		return true;
	}
	else 
	{
		return false;
	}
}

int main()
{
	int size;
	cin >> size;

	int arr[100]; 
	
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + size);

	cout << "The maximum number : " << arr[size - 1] << endl;
	cout << "The minimum number : " << arr[0] << endl;
	
	int countPrime = 0;
	int countPalindrome = 0;

	for (int i = 0; i < size; i++)
	{
		if (palindrome(arr[i]))
		{
			countPalindrome++;
		}

		int m = arr[i] / 2; 
		int flag = 0;

		for (int z = 2; z <= m; z++)
		{
			if (arr[i] % z == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0 && arr[i] != 1)  
			countPrime++;
	}

	cout << "The number of prime numbers : " << countPrime << endl;
	cout << "The number of palindrome numbers : " << countPalindrome << endl;
	
	int c;
	int max; 
	int index;

	for (int i = 0; i < size; i++)
	{ 
		c = countDivisor(arr[i]);

		if (i == 0)
		{
			max = c;
			index = i;
		}
		else 
		{
			if (c >= max) 
			{
				max = c;
				index = i;
			}
		}
	}
	cout << "The number that has the maximum number of divisors : " << arr[index] << endl;
}
