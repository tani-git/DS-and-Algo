#include<iostream>
using namespace std;

void reverse_array(int a[], int start, int end)
{
	while(start >= end)
		return;
	int temp = a[start];
	a[start] = a[end];
	a[end] = temp;

	reverse_array(a, start+1, end-1);
}
void print_array(int a[], int n)
{
	for(int i = 0; i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	int a[] = {1,3,4,5,6};
	print_array(a, 5);
	reverse_array(a,0, 4);;
	print_array(a, 5);
	return 0;

}