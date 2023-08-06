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

string solve()
{
    int l1, l2, l3;
    cin>>l1>>l2>>l3;
    if((l1 == l2 && l3%2 == 0) || (l2 == l3 && l1%2 == 0) || (l3 == l1 && l2%2 == 0))
    return "YES";
    else if(l1+l2 == l3 || l2+l3 == l1 || l3+l1 == l2)
    return "YES";
    return "NO";
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
        cout<<solve()<<endl;
    }
    return 0;
}