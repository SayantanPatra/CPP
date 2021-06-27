//Given an array arr of N integers. Find the contiguous sub-array with maximum sum.
#include<iostream>
using namespace std;

int max(int a[], int size)
{
	int max2 = -999, max1 = 0;

	for (int i = 0; i < size; i++)
	{
		max1 = max1 + a[i];
		if (max1 > max2)
			max2 = max1;

		if (max1 < 0)
			max1 = 0;
	}
	return max2;
}

int main()
{
	int sum,n,arr[100];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout << "Sum is " << max(arr, n);
	return 0;
}
