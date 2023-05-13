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
        int n,k;
        cin>>n>>k;
        if(n%k==0)
        cout<<n<<endl;
        else
        {
           int a=n/k*k;
            cout<<min(n,a+k/2)<<endl;
        } 
    }
    return 0;
}