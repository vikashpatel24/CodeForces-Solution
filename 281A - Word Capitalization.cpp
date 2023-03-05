#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

// Codeforces Profile: https://codeforces.com/profile/vikashpatel

int main()
{
    string s;
    cin>>s;
    s[0]=toupper(s[0]);
    cout<<s<<endl;
}



/* OTHER METHODS */
/* 
1.      s[0]=(islower(s[0]))? s[0]-32 : s[0];

2.      transform(s.begin(),s.begin()+1,s.begin(),::toupper);
*/