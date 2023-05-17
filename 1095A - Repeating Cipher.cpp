//                                 ॐ नमः शिवाय
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
// Code Written By: Vikash Patel
// Codeforces Profile: https://codeforces.com/profile/vikashpatel
 
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    string ds;
    int c = 2;
    for(int i=0; i<n; )
    {
        ds += s[i];
        i += c;
        c++;
    }
    cout<<ds<<endl;
    return 0;
}
