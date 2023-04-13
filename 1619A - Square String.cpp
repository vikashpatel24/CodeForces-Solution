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
        string s;
        cin>>s;
        if(s.size()%2)
        {
            cout<<"NO"<<endl;
            continue;
        }
        long h = s.size() / 2;
        bool sq(true);
        for(long p = 0; p < h; p++)
        {
            if(s[p] != s[h + p])
            {
                sq = false;
                break;
            }
        }
        cout<<(sq ? "YES" : "NO")<<std::endl;
    }
    return 0;
}