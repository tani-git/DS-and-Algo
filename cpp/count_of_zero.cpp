#include<bits/stdc++.h>
using namespace std;

void shift_zero(int a[], int n)
{
	int count = 0;
	for(int i=0; i< n; i++)
	{
		if(a[i] != 0)
			a[count++] = a[i];
	}
	while(count < n)
		a[count++] = 0;
}

int main()
{
	int a[] = {1,3,4,5,0,0,6,0,4,0,1};
	int n = sizeof(a)/sizeof(a[0]);
	shift_zero(a, n);
	cout<<" array after shifting all zeros to the end is"<" ";
	for(int i = 0;i<n;i++)
		cout<<a[i]<<" ";
}