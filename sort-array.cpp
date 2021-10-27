#include <iostream>

using namespace std;

int main()
{
  int n,j,t, arr[100];
  cout<<"enter number of read: ";
  cin>>n;

    for (int i = 0; i < n; i++)
	{

		cin >> arr[i];
	}


	for (int i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
			}
		}
	}


	cout << "Sorted  Array elements:" << endl;
	for (int i = 0; i < n; i++)
		cout << arr[i] << "\t";
	cout << endl;

    return 0;
}
