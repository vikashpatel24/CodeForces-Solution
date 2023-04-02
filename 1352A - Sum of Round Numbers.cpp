//                                 ॐ नमः शिवाय
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
// Code Written By: Vikash Patel
// Codeforces Profile: https://codeforces.com/profile/vikashpatel

bool checkRound(int x)
{
    if(x <= 10 && x>0)
    return true;
    if(x % 10 == 0)
    return true;
    return false;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int c = 0;
        vector<int> s;
        int i = 0;
        while(n!=0)
        {
            if(n%10!=0)
            {
                int ans = pow(10,i);
                ans *= (n%10);
                s.push_back(ans);
            }
            n /= 10;
            i++;
        }
        cout<<s.size()<<endl;
        for(int i = 0; i<s.size(); i++)
        {
            cout<<s[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

