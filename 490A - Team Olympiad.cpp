//                                 ॐ नमः शिवाय
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
// Code Written By: Vikash Patel
// Codeforces Profile: https://codeforces.com/profile/vikashpatel
 
int main()
{
    int n;
    cin>>n;
    int t[n];
    vector<int> t1; //Storing indexes based on talent t1, t2 nad t3
    vector<int> t2;
    vector<int> t3;
    for(int i=0;i<n;i++)
    {
        cin>>t[i];
        if(t[i]==1)
        t1.push_back(i+1);
        else if(t[i]==2)
        t2.push_back(i+1);
        else
        t3.push_back(i+1);
    }
    if(t1.size()==0 || t2.size()==0 || t3.size()==0)
    cout<<0<<endl;
    else
    {
        int maxTeams = min(t1.size(),min(t2.size(),t3.size()));
        cout<<maxTeams<<endl;
        for(int i=0;i<maxTeams;i++)
        {
            cout<<t1[i]<<" "<<t2[i]<<" "<<t3[i]<<endl;
        }
    }
    return 0;
}
