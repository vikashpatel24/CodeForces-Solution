//                                 ॐ नमः शिवाय
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
 
// Code Written By: Vikash Patel
// Codeforces Profile: https://codeforces.com/profile/vikashpatel

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("/Users/vikash/Desktop/output.txt", "w", stdout);
    // #endif
    
    int t;
    cin>>t;
    while(t--)
    {
        int x, k;
        cin>>x>>k;
        if(abs(x)%k != 0)
        {
            cout<<"1"<<endl;
            cout<<x<<endl;
        }
        else
        {
            cout<<"2"<<endl;
            cout<<(k+1)<<" "<<(x-k-1)<<endl;
        }
    }
    return 0;
}