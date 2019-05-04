#include<bits/stdc++.h>
using namespace std;

int rotation_count(string str)
{
	string tmp = str + str;
	int n = str.length();


	for( int i = 1; i<=n; i++)
	{
		string substring = tmp.substr(i, str.size());

		if(str == substring){
			
			return i;
		}
	}
	
	
	
}

int main()
{
	string str = "geeks";
	int res = rotation_count(str);
	cout<<"number of rotations"<<" "<<res;
	return 0;


}