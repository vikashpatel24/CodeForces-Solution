#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    sort(s.begin(),s.end());
    int count=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]!=s[i+1])
        {
            count++;
        }
    }
    if(count==26)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}