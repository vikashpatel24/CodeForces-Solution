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
        int a[n], i, maxi = 0;
        for(i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        bool no = false;
        for(i = 0; i < n-2; i++){
            if(a[i]%2 != a[i+2]%2) {
                no = true;
                break;
            }
        }
        if(no) 
        cout<<"NO"<<endl;
        else 
        cout<<"YES"<<endl;
    }
    return 0;
}


