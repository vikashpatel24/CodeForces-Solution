//                                 ॐ नमः शिवाय
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
// Code Written By: Vikash Patel
// Codeforces Profile: https://codeforces.com/profile/vikashpatel
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
		cin>>str;
		int ct=0;
		int i;
		for(i=0;i<str.size();i++)
		{
			if(i==0)
			{
				if(str[i]=='R' || str[i]=='G' || str[i]=='B')
				{
					break;
//					return 0;
				}
			}
			else if(str[i]>='A' && str[i]<='Z')
			{
				for(int j=i-1;j>-1;j--)
				{
					if(str[j]==str[i]+32)
					{
						ct++;
						break;
					}
				}
			}
			
		}
		if(ct==3)
		cout<<"YES"<<endl;
		else if(i==0)
		cout<<"NO"<<endl;
		else
		cout<<"NO"<<endl;
    }
    return 0;
}