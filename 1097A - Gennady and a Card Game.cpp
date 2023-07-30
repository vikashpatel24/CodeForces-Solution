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
    string one;
    cin>>one;
    string sec[5];
    for(int i=0; i<5; i++)
    {
        cin>>sec[i];
        if(sec[i][0] == one[0] || sec[i][1] == one[1])
        return "YES";
    }
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
    
    cout<<solve()<<endl;
    return 0;
}