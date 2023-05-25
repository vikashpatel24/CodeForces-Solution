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
        int n;
        cin>>n;
        string s; 
        cin>>s;
        bool ans = (n > 2) || (s == "00") || (s == "11");
        cout<<(ans?"NO":"YES")<<endl;
    }
    return 0;
}