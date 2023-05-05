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
        int n;
        cin>>n;
        int a;
        int one=0;
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            if(a==1)
            {
                one++;
                sum++;
            }
            else
            sum += 2;
        }
        if(sum % 2 == 0)
        {
            int div = sum/2;
            if(div % 2 == 0)
            cout<<"YES"<<endl;
            else
            {
                if(one)
                cout<<"YES"<<endl;
                else
                cout<<"NO"<<endl;
            }
        }
        else
        cout<<"NO"<<endl;
    }
    return 0;
}
