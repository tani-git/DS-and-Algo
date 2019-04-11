#include<iostream>
using namespace std;

int subarray_sum_indexes(int a[], int n, int sum)
{
	int curr_sum = a[0];
	int start = 0;
for(int i=1; i<=n; i++)
{
	while(curr_sum > sum && start < i-1)
	{
		curr_sum = curr_sum - a[start];
		start++;
	}
	if(curr_sum == sum)
	{
		cout<<"indexes with sum is"<<" "<< start<<" "<<" and"<<" " << i-1;
		return 1;
	}
	if(i<n)
	{
		curr_sum = curr_sum + a[i];
	}
}
cout<<"sum is not found";
return 0;

}

int main()
{
	int a[] = {15, 2, 4, 8, 9, 5, 10, 23};
	int n = sizeof(a)/sizeof(a[0]);
	int sum = 23;
	subarray_sum_indexes(a, n, sum);
	return 0;
}