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
        string s;
        cin>>s;
        unordered_map<char, int> mp;
        for(auto i : s)
        {
            mp[i]++;
        }
        if(mp.size() >= 3)
        cout<<4<<endl;
        else if(mp.size() == 2 && (mp[s[0]] == 2 || mp[s[1]] == 2 || mp[s[2]] == 2))
        cout<<4<<endl;
        else if(mp.size() == 2)
        cout<<6<<endl;
        else
        cout<<-1<<endl;
    }
    return 0;
}