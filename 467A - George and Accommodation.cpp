//                                 ॐ नमः शिवाय
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
 
// Code Written By: Vikash Patel
// Codeforces Profile: https://codeforces.com/profile/vikashpatel
 
int main()
{
    int n,c=0;
    cin>>n;
    while(n--)
    {
        int p,q;
        cin>>p>>q;
        if(q-p>=2)
        c++;
    }
    cout<<c<<endl;
    return 0;
}