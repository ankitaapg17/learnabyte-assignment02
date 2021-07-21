//An array of non-negative integers and a sum. We have to find the sum of the subarray having a maximum sum less than
//or equal to the given sum in the array.

//Naaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
#include <bits/stdc++.h>
using namespace std;

// To find subarray with maximum sum
// less than or equal to sum
int findMaxSubarraySum(int arr[], int n, int sum)
{
	// To store current sum and
	// max sum of subarrays
	int curr_sum = arr[0], max_sum = 0, start = 0;

	// To find max_sum less than sum
	for (int i = 1; i < n; i++) {

		// Update max_sum if it becomes
		// greater than curr_sum
		if (curr_sum <= sum)
		max_sum = max(max_sum, curr_sum);

		// If curr_sum becomes greater than
		// sum subtract starting elements of array
		while (curr_sum + arr[i] > sum && start < i) {
			curr_sum -= arr[start];
			start++;
		}
		
		// Add elements to curr_sum
		curr_sum += arr[i];
	}

	// Adding an extra check for last subarray
	if (curr_sum <= sum)
		max_sum = max(max_sum, curr_sum);

	return max_sum;
}

// Driver program to test above function
int main()
{
	int arr[] = {3,4,7,8,10};
	int n = sizeof(arr) / sizeof(arr[0]);
	int sum = 5;

	cout << findMaxSubarraySum(arr, n, sum);

	return 0;
}




