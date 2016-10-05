////////////////////////////////
//Max composition of 3 numbers//
////////////////////////////////

#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	cout << "Please, enter count of numbers(more than 3):" << endl;
	int n, k = 0;
	cin >> n;
	int *Array = new int[n];

	cout << "Please, enter " << n << " numbers" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> Array[i];
	}

	int max1 = -1000, max2 = -1000, max3 = -1000, min1 = 1000, min2 = 1000;

	for (int i = 0; i < n; i++)
	{
		if (Array[i] >= max1)
		{
			max3 = max2;
			max2 = max1;
			max1 = Array[i];
		}
		else if (Array[i] >= max2)
		{
			max3 = max2;
			max2 = Array[i];
		}
		else if (Array[i] >= max3)
		{
			max3 = Array[i];
		}

		if (Array[i] <= min1)
		{
			min2 = min1;
			min1 = Array[i];
		}
		else if (Array[i] <= min2)
		{
			min2 = Array[i];
		}
	}

	int a = max1*max2*max3,
		b = max1*min1*min2;

	if (a > b)
		cout << "Max composition of 3 numbers is: " << a << endl;
	else
		cout << "Max composition of 3 numbers is: " << b << endl;

	system("pause");
	return 0;
}