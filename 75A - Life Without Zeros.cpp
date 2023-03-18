//                                 ॐ नमः शिवाय
#include<bits/stdc++.h>
using namespace std;
 
// Code Written By: Vikash Patel
// Codeforces Profile: https://codeforces.com/profile/vikashpatel
 
int main()
{
    long long a,b;
    cin>>a>>b;
    long long c = a+b;
    string as = to_string(a);
    string bs = to_string(b);
    string cs = to_string(c);
    as.erase(remove(as.begin(), as.end(), '0'), as.end());
    bs.erase(remove(bs.begin(), bs.end(), '0'), bs.end());
    cs.erase(remove(cs.begin(), cs.end(), '0'), cs.end());
    long long ans = stoll(as)+stoll(bs);
    if(ans == stoll(cs))
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}