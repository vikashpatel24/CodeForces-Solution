#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

int main()
{
    int n;
    cin>>n;
    int gift=0;
		gift=2*(n/3);
		if(n%3>0)
		{
			gift++;
		}
    cout<<gift<<endl;
}

