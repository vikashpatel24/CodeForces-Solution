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
   int n;
   cin>>n;
   string s[n];
   unordered_map<char, int> mp;
   for(int i=0; i<n; i++)
   {
       cin>>s[i];
       for(auto j : s[i])
       {
           mp[j]++;
       }
   }
   for(auto i : mp)
   {
       if(i.ss%n != 0)
       return "NO";
   }
   return "YES"; 
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