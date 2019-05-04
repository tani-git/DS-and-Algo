#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b);

void positive_negative(int a[], int n)
{
	int i = -1;
	for(int j=0; j<n; j++)
	{
		if(a[j] < 0)
		{
			i++;
			swap(&a[i], &a[j]);
		}
	}
	int pos = i+1;
	int start = 0;
	while(pos<n && start < pos && a[start] < 0)
	{
		swap(&a[start], &a[pos]);
		pos = pos+1;
		start = start+2;
	}
}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void print_array(int a[], int n)
{
	for(int i=0;i<n; i++)
		cout<<a[i]<<" ";
}


int main()
{
	int a[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
	int n = sizeof(a)/sizeof(a[0]);
	positive_negative(a, n);
	print_array(a,n);
	return 0;
}