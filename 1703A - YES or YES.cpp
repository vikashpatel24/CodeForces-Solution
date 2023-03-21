//                                 ॐ नमः शिवाय
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
 
// Code Written By: Vikash Patel
// Codeforces Profile: https://codeforces.com/profile/vikashpatel
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        transform(s.begin(),s.end(),s.begin(), ::tolower);
        if(s=="yes")
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}