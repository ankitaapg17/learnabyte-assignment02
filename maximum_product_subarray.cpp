//An array that contains both positive and negative integers, find the product of the maximum product subarray


//The idea is to traverse over every contiguous subarrays
//find the product of each of these subarrays 
//and return the maximum product from these results.


// C++ program to find maximum product subarray	
#include <bits/stdc++.h>
using namespace std;

// Function to find maximum product subarray
int maxProduct(int* arr, int n)
{
	// Variables to store maximum and minimum
	// product till ith index.
	int minVal = arr[0];
	int maxVal = arr[0];

	int maxProduct = arr[0];

	for (int i = 1; i < n; i++) {

		// When multiplied by -ve number,
		// maxVal becomes minVal
		// and minVal becomes maxVal.
		if (arr[i] < 0)
			swap(maxVal, minVal);

		// maxVal and minVal stores the
		// product of subarray ending at arr[i].
		maxVal = max(arr[i], maxVal * arr[i]);
		minVal = min(arr[i], minVal * arr[i]);

		// Max Product of array.
		maxProduct = max(maxProduct, maxVal);
	}

	// Return maximum product found in array.
	return maxProduct;
}

// Driver Code
int main()
{
	int i,n,arr[n] ;
	cout<<"Enter size of array: "<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout << "Maximum Subarray product is "
		<< maxProduct(arr, n) << endl;

	return 0;
}
 
	
	









