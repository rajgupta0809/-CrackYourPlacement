#include <bits/stdc++.h>
using namespace std;

/* Function to get index of
ceiling of x in arr[low..high]*/
int ceilSearch(int arr[], int low, int high, int x)
{
	int mid;	
	
	if(x <= arr[low])
		return low;
	
	if(x > arr[high])
		return -1;
	
	mid = (low + high) / 2;
	
	/* If x is same as middle element,
	then return mid */
	if(arr[mid] == x)
		return mid;
		
	/* If x is greater than arr[mid],
	then either arr[mid + 1] is ceiling of x
	or ceiling lies in arr[mid+1...high] */
	else if(arr[mid] < x)
	{
		if(mid + 1 <= high && x <= arr[mid + 1])
			return mid + 1;
		else
			return ceilSearch(arr, mid + 1, high, x);
	}
	
	/* If x is smaller than arr[mid],
	then either arr[mid] is ceiling of x
	or ceiling lies in arr[low...mid-1] */
	else
	{
		if(mid - 1 >= low && x > arr[mid - 1])
			return mid;
		else
			return ceilSearch(arr, low, mid - 1, x);
	}
}

int main()
{
	int arr[] = {1, 2, 8, 10, 10, 12, 19};
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 20;
	int index = ceilSearch(arr, 0, n-1, x);
	if(index == -1)
		cout << "Ceiling of " << x
			<< " doesn't exist in array ";
	else
		cout << "ceiling of " << x
			<< " is " << arr[index];
	
	return 0;
}