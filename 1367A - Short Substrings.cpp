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
        string a,b;
        cin>>b;
        a += b[0];
        for(int i=1;i<b.size()-1;)
        {
            if(b[i]==b[i+1])
            {
                a += b[i];
                i+=2;
            }
        }
        a += b[b.size()-1];
        cout<<a<<endl;
    }
    return 0;
}