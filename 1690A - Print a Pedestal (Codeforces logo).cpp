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
        int n;
        cin>>n;
        int x = (n-3)/3;
        if(n%3 == 0) 
        cout<<x+1<<" "<<x+2<<" "<<x<<endl;
        else if(n%3 == 1)
        cout<<x+1<<" "<<x+3<<" "<<x<<endl;
        else
        cout<<x+2<<" "<<x+3<<" "<<x<<endl;
    }
    return 0;
}
