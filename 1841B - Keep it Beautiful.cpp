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
        int num, flag = 0, first = -1, last = -1;
        while(n--)
        {
            cin>>num;
            if(flag) 
            {
                if(num >= last and num <= first) 
                {
                    last = num;
                    cout<<1;
                }
                else
                cout<<0;
            }
            else 
            {
                if(first == -1) 
                {
                    first = num;
                    last = num;
                    cout<<1;
                }
                else if(num >= last) 
                {
                    last = num;
                    cout<<1;
                }
                else if(first >= num) 
                {
                    last = num;
                    flag = 1;
                    cout<<1;
                }
                else
                cout<<0;
            }
        }
        cout<<endl;
    }
    return 0;
}