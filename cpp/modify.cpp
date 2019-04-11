#include<iostream>
using namespace std;

void modify(int a[], int n)
{
	if(n <=	 1)
		return;
	int prev = a[0];
	a[0] = a[0] * a[1];
	for(int i = 1; i<n-1; i++)
	{
		int curr = a[i];

		a[i] = prev * a[i+1];

		prev = curr;
	}
	a[n-1] = prev * a[n-1];
}

void print_array(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
}

int main()
{
	int a[] = {2, 3, 4, 5, 6};
	int n = sizeof(a)/sizeof(a[0]);
	modify(a, n);
	cout<<"modified array is"<<" ";
	print_array(a,n);
	return 0;
}