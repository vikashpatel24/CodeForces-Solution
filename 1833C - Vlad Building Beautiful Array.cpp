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
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int mini = INT_MAX;
        int cnt = 0;
        for(int i=0; i<n; i++)
        {
        	if(a[i]%2==0)
        	cnt++;
        	mini = min(mini, a[i]);
        }
       	if(cnt == n)
       	cout<<"YES"<<endl;
       	else if(mini%2 == 0)
       	cout<<"NO"<<endl;
       	else
       	cout<<"YES"<<endl;
    }
    return 0;
}