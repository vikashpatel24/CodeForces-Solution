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
        int b[7];
        for(int i=0; i<7; i++)
        {
            cin>>b[i];
        }
        int a1 = b[0];
        int x = b[6]-b[0];
        int a2 = b[1];
        int a3;
        for(int i=2; i<7; i++)
        {
            if(x-a2 == b[i])
            {
                a3 = b[i];
                break;
            }
        }
        cout<<a1<<" "<<a2<<" "<<a3<<endl;
    }
    return 0;
}