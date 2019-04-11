#include<iostream>
using namespace std;

int Missing_number(int a[], int n)
{
	int i;
	int total = (n+1)*(n+2)/2;
	for(i = 0; i<n; i++)
	{
		total = total - a[i];

	}
	return total;
}
int main()
{
	int a[] = {1,2,3,5,6};
	int size = sizeof(a)/sizeof(a[0]);
	int n = Missing_number(a, size);
	cout<<"missing number"<<n;
}