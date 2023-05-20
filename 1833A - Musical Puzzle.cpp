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
        unordered_set<string> st;
        for(int i=0; i<n-1; i++)
        {
            st.insert(s.substr(i,2));
        }
        cout<<st.size()<<endl;
    }
    return 0;
}