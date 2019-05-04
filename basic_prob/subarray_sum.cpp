#include<iostream>
#include<climits>
using namespace std;

int Max_subarray_sum(int a[], int size)
{
	int max_so_far = INT_MIN, max_ending_here = 0;

	for(int i = 0; i<size; i++)
	{
		max_ending_here = a[i] + max_ending_here;
		if(max_ending_here < 0)
		{
			max_ending_here = 0;
		}
		else if(max_so_far < max_ending_here)
		{
			max_so_far = max_ending_here;
		}
	}
	return max_so_far;
 }

int main()
{
	int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
	int size = sizeof(a)/sizeof(a[0]);
	int max_sum = Max_subarray_sum(a, size);
	cout<<"max subarray sum is:"<<max_sum;
	return 0;
}