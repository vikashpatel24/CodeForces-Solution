//                                 ॐ नमः शिवाय
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
// Code Written By: Vikash Patel
// Codeforces Profile: https://codeforces.com/profile/vikashpatel

bool solve(string s)
{
    int n = s.size();
    string hello = "hello";
    int j =  0, c = 0;
    for(int i=0; i<n; i++)
    {
        if(s[i] == hello[j])
        {
            j++;
            c++;
        }
    }
    if(c==5)
    return 1;
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    cin>>s;
    cout<<(solve(s)?"YES" : "NO")<<endl;
    return 0;
}
