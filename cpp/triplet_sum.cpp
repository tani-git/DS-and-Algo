#include<bits/stdc++.h>
using namespace std;

void triplet_sum(int a[], int n, int sum)
{
	sort(a, a+n);
	for(int i=0; i < n-2; i++)
	{
		int j = i+1, k = n-1;
		while(j < k)
		{
			if(a[i] + a[j] + a[k] >= sum)
				k--;
			else
			{
				for(int x = j+1; x<=k; x++)
					cout<<"("<<a[i]<<","<<a[j]<<","<<a[x]<<")"<<endl;
				j++;

			}

			
		}
	}
}


int main()
{
	int a[] = {5, 1, 3, 4, 7 };
	int n = sizeof(a)/sizeof(a[0]);
	int sum = 12;
	triplet_sum(a, n, sum);
	return 0;
}