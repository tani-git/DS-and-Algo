#include<bits/stdc++.h>
using namespace std;

void rearrange(int a[], int n)
{
	int ans[n];
	sort(a, a+n);
	int p = 0, q = n-1;
	for( int i=0; i<n; i++)
	{
		if((i+1) % 2	 == 0)
		{
			ans[i] = a[q--];
		}
		else
		{
			ans[i] = a[p++];
		}
	}
	cout<<"rearrange aaray is";
	for(int j=0; j<n; j++)
		cout<<ans[j]<<" ";
}

int main()
{
	int a[] = {1, 3, 2, 2, 5};
	int n = sizeof(a)/sizeof(a[0]);
	rearrange(a, n);
	return 0;
}