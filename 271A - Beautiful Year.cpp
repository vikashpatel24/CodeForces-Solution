//                                 ॐ नमः शिवाय
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
 
// Code Written By: Vikash Patel
// Codeforces Profile: https://codeforces.com/profile/vikashpatel
 
int main()
{
    int y;
    cin>>y;
    int n=y+1;
    while(true)
    {
        string s = to_string(n);
        set<int> st;
        for(auto i:s)
        {
            st.insert(i-'0');
        }
        if(st.size()==4)
        break;
        n++;
    }
    cout<<n<<endl;
    return 0;
}