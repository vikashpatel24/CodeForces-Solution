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
        int a[3];
        // for(int i=0; i<3; i++)
        // {
        //     cin>>a[i];
        // }
        cin>>a[0]>>a[1]>>a[2];
 
		sort(a,a+3);
		if(a[1]==a[2]) cout<<"YES"<<endl<<a[2]<<" "<<a[0]<<" "<<a[0]<<endl;
		else cout<<"NO"<<endl;
    }
    return 0;
}