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

void solveEven(int n)
{
    int i = 2;
    while(i <= n)
    {
        cout<<i<<" ";
        cout<<i-1<<" ";
        i+=2;
    }
}

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
        if(n%2)
        {
            // cout<<n-3+6<<endl;
            if(n>3)
            {
                solveEven(n-3);
            }
            cout<<n<<" "<<n-2<<" "<<n-1<<endl;
        }
        else
        {
            // cout<<n<<endl;
            solveEven(n);
            cout<<endl;
        }
    }
    return 0;
}