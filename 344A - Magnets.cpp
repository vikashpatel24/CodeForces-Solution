//                                 ॐ नमः शिवाय
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
 
// Code Written By: Vikash Patel
// Codeforces Profile: https://codeforces.com/profile/vikashpatel
 
int main()
{
    int n;
    cin>>n;
    string mag[n];
    for(int i = 0;i<n;i++)
    {
        cin>>mag[i];
    }
    int gp = 0;
    for(int i = 0;i<n;i++)
    {
        if(mag[i]!=mag[i+1])
        gp++;
    }
    cout<<gp<<endl;
    return 0;
}